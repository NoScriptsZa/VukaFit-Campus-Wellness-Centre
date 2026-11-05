
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

// Function declarations
void displaySessionMenu();
double getSessionRate(int sessionCode);
bool validParticipants(int participants);
double calculateSubtotal(double rate, int participants);
double calculateDiscount(double subtotal, int participants);
double calculateWeekendSurcharge(double amountAfterDiscount, char saturday);
void displayBookingSummary(string bookingRef, string sessionName,
                           int participants, double subtotal,
                           double discount, double surcharge,
                           double finalTotal);

int main()
{
    // Variables
    string bookingRef = "BK204";
    string sessionName;
    int sessionCode;
    int participants;
    double rate;
    double subtotal;
    double discount;
    double surcharge;
    double finalTotal;
    char saturday;

    cout << "========================================\n";
    cout << "       VUKAFIT SESSION BOOKING\n";
    cout << "========================================\n";

    // Display available sessions
    displaySessionMenu();

    // Capture session selection
    cout << "\nSelect session (1-3): ";
    cin >> sessionCode;

    rate = getSessionRate(sessionCode);

    if (rate == 0)
    {
        cout << "ERROR: Invalid session code.\n";
        return 0;
    }

    // Set session name
    switch (sessionCode)
    {
        case 1:
            sessionName = "Yoga Fundamentals";
            break;

        case 2:
            sessionName = "Strength Circuit";
            break;

        case 3:
            sessionName = "Stress Management";
            break;
    }

    // Capture number of participants
    cout << "Enter number of participants (1-12): ";
    cin >> participants;

    if (!validParticipants(participants))
    {
        cout << "ERROR: Participants must be between 1 and 12.\n";
        return 0;
    }

    // Ask whether booking is on Saturday
    cout << "Is the booking on Saturday? (Y/N): ";
    cin >> saturday;

    saturday = toupper(saturday);

    if (saturday != 'Y' && saturday != 'N')
    {
        cout << "ERROR: Please enter Y or N.\n";
        return 0;
    }

    // Calculate booking amounts
    subtotal = calculateSubtotal(rate, participants);

    discount = calculateDiscount(subtotal, participants);

    double amountAfterDiscount = subtotal - discount;

    surcharge = calculateWeekendSurcharge(amountAfterDiscount, saturday);

    finalTotal = amountAfterDiscount + surcharge;

    // Display booking summary
    displayBookingSummary(bookingRef, sessionName, participants,
                          subtotal, discount, surcharge, finalTotal);

    return 0;
}

// Function to display session menu
void displaySessionMenu()
{
    cout << "\nAvailable Sessions\n";
    cout << "1. Yoga Fundamentals   - R75.00 per person\n";
    cout << "2. Strength Circuit    - R110.00 per person\n";
    cout << "3. Stress Management   - R90.00 per person\n";
}

// Function to return session rate
double getSessionRate(int sessionCode)
{
    switch (sessionCode)
    {
        case 1:
            return 75.00;

        case 2:
            return 110.00;

        case 3:
            return 90.00;

        default:
            return 0.00;
    }
}

// Function to validate participants
bool validParticipants(int participants)
{
    return participants >= 1 && participants <= 12;
}

// Function to calculate subtotal
double calculateSubtotal(double rate, int participants)
{
    return rate * participants;
}

// Function to calculate group discount
double calculateDiscount(double subtotal, int participants)
{
    if (participants >= 8)
    {
        return subtotal * 0.10;
    }

    return 0.00;
}

// Function to calculate Saturday surcharge
double calculateWeekendSurcharge(double amountAfterDiscount, char saturday)
{
    if (saturday == 'Y')
    {
        return amountAfterDiscount * 0.15;
    }

    return 0.00;
}

// Function to display booking summary
void displayBookingSummary(string bookingRef, string sessionName,
                           int participants, double subtotal,
                           double discount, double surcharge,
                           double finalTotal)
{
    cout << fixed << setprecision(2);

    cout << "\n========================================\n";
    cout << "          BOOKING SUMMARY\n";
    cout << "========================================\n";

    cout << "Booking Reference: " << bookingRef << endl;
    cout << "Session:           " << sessionName << endl;
    cout << "Participants:      " << participants << endl;

    cout << "\nSubtotal:          R" << subtotal << endl;
    cout << "Group Discount:    R" << discount << endl;
    cout << "Saturday Surcharge:R" << surcharge << endl;

    cout << "----------------------------------------\n";
    cout << "Final Total:       R" << finalTotal << endl;
    cout << "Cost Per Person:   R" << finalTotal / participants << endl;

    cout << "========================================\n";
    cout << "Thank you for booking with VukaFit!\n";
}
