
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    // Variables
    string studentNumber, studentName, membershipName;
    int membershipCode, months;
    double monthlyFee = 0.0;
    double subtotal, discountRate = 0.0;
    double discount, assessmentFee = 0.0;
    double finalAmount;
    char assessmentChoice;

    // Display heading
    cout << "========================================\n";
    cout << "       VUKAFIT MEMBERSHIP SYSTEM\n";
    cout << "========================================\n";

    // Capture student details
    cout << "Enter student number: ";
    cin >> studentNumber;

    cin.ignore(1000, '\n');

    cout << "Enter full name: ";
    getline(cin, studentName);

    // Display membership options
    cout << "\nAvailable Memberships\n";
    cout << "1. Basic Access       - R220.00\n";
    cout << "2. Active Plus        - R350.00\n";
    cout << "3. Complete Wellness - R480.00\n";

    cout << "\nSelect membership code (1-3): ";
    cin >> membershipCode;

    // Validate membership
    if (membershipCode < 1 || membershipCode > 3)
    {
        cout << "ERROR: Invalid membership code.\n";
        return 0;
    }

    // Select membership
    switch (membershipCode)
    {
        case 1:
            membershipName = "Basic Access";
            monthlyFee = 220.00;
            break;

        case 2:
            membershipName = "Active Plus";
            monthlyFee = 350.00;
            break;

        case 3:
            membershipName = "Complete Wellness";
            monthlyFee = 480.00;
            break;
    }

    // Capture and validate months
    cout << "Enter number of months (1-6): ";
    cin >> months;

    if (months < 1 || months > 6)
    {
        cout << "ERROR: Registration must be between 1 and 6 months.\n";
        return 0;
    }

    // Calculate discount rate
    if (months >= 3 && months <= 5)
    {
        discountRate = 0.07;
    }
    else if (months == 6)
    {
        discountRate = 0.12;
    }

    // Fitness assessment option
    cout << "Add fitness assessment? (Y/N): ";
    cin >> assessmentChoice;

    assessmentChoice = toupper(assessmentChoice);

    if (assessmentChoice != 'Y' && assessmentChoice != 'N')
    {
        cout << "ERROR: Please enter Y or N.\n";
        return 0;
    }

    // Calculate amounts
    subtotal = monthlyFee * months;
    discount = subtotal * discountRate;

    if (assessmentChoice == 'Y')
    {
        assessmentFee = 180.00;
    }

    finalAmount = subtotal - discount + assessmentFee;

    // Display quotation
    cout << fixed << setprecision(2);

    cout << "\n========================================\n";
    cout << "          VUKAFIT QUOTATION\n";
    cout << "========================================\n";

    cout << "Student Number: " << studentNumber << endl;
    cout << "Student Name:   " << studentName << endl;
    cout << "Membership:     " << membershipName << endl;
    cout << "Monthly Fee:    R" << monthlyFee << endl;
    cout << "Months:         " << months << endl;

    cout << "\nMembership Subtotal: R" << subtotal << endl;
    cout << "Discount Rate:       " << discountRate * 100 << "%\n";
    cout << "Discount Amount:     R" << discount << endl;
    cout << "Assessment Fee:      R" << assessmentFee << endl;

    cout << "----------------------------------------\n";
    cout << "FINAL AMOUNT:        R" << finalAmount << endl;
    cout << "========================================\n";

    cout << "\nThank you for choosing VukaFit!\n";

    return 0;
}