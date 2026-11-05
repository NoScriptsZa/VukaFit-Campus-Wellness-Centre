
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    const int MAX_ATTEMPTS = 10;

    string studentNumber;
    int activityCode;
    int duration;
    int attempts = 0;

    int validCheckIns = 0;
    int invalidAttempts = 0;

    int shortVisits = 0;
    int standardVisits = 0;
    int extendedVisits = 0;

    int gymVisits = 0;
    int groupClassVisits = 0;
    int consultationVisits = 0;

    int totalMinutes = 0;

    char continueChoice = 'Y';

    cout << "====================================\n";
    cout << "     VUKAFIT DAILY CHECK-IN SYSTEM\n";
    cout << "====================================\n";

    while (attempts < MAX_ATTEMPTS && toupper(continueChoice) == 'Y')
    {
        attempts++;

        cout << "\nCheck-in attempt " << attempts
             << " of " << MAX_ATTEMPTS << endl;

        cout << "Enter student number: ";
        cin >> studentNumber;

        cout << "\nActivities:\n";
        cout << "1. Gym Floor\n";
        cout << "2. Group Class\n";
        cout << "3. Wellness Consultation\n";

        cout << "Select activity (1-3): ";
        cin >> activityCode;

        cout << "Enter duration in minutes: ";
        cin >> duration;

        if (activityCode < 1 || activityCode > 3 ||
            duration < 15 || duration > 180)
        {
            cout << "\nINVALID CHECK-IN\n";

            if (activityCode < 1 || activityCode > 3)
            {
                cout << "Invalid activity code.\n";
            }

            if (duration < 15 || duration > 180)
            {
                cout << "Duration must be between 15 and 180 minutes.\n";
            }

            invalidAttempts++;
        }
        else
        {
            validCheckIns++;
            totalMinutes += duration;

            cout << "\nCHECK-IN SUCCESSFUL\n";
            cout << "Student Number: " << studentNumber << endl;

            switch (activityCode)
            {
                case 1:
                    cout << "Activity: Gym Floor\n";
                    gymVisits++;
                    break;

                case 2:
                    cout << "Activity: Group Class\n";
                    groupClassVisits++;
                    break;

                case 3:
                    cout << "Activity: Wellness Consultation\n";
                    consultationVisits++;
                    break;
            }

            cout << "Duration: " << duration << " minutes\n";

            if (duration >= 15 && duration <= 44)
            {
                cout << "Category: SHORT VISIT\n";
                shortVisits++;
            }
            else if (duration >= 45 && duration <= 89)
            {
                cout << "Category: STANDARD VISIT\n";
                standardVisits++;
            }
            else
            {
                cout << "Category: EXTENDED VISIT\n";
                extendedVisits++;
            }

            if (duration >= 120)
            {
                cout << "LONG SESSION CHECK\n";
            }
        }

        if (attempts < MAX_ATTEMPTS)
        {
            cout << "\nWould you like to enter another check-in? (Y/N): ";
            cin >> continueChoice;
            continueChoice = toupper(continueChoice);

            while (continueChoice != 'Y' && continueChoice != 'N')
            {
                cout << "Please enter Y or N: ";
                cin >> continueChoice;
                continueChoice = toupper(continueChoice);
            }
        }
    }

    double averageDuration = 0.0;

    if (validCheckIns > 0)
    {
        averageDuration = static_cast<double>(totalMinutes) / validCheckIns;
    }

    cout << "\n====================================\n";
    cout << "       DAILY CHECK-IN SUMMARY\n";
    cout << "====================================\n";

    cout << "Valid check-ins:       " << validCheckIns << endl;
    cout << "Invalid attempts:      " << invalidAttempts << endl;

    cout << "\nVISIT CATEGORIES\n";
    cout << "Short visits:          " << shortVisits << endl;
    cout << "Standard visits:       " << standardVisits << endl;
    cout << "Extended visits:       " << extendedVisits << endl;

    cout << "\nACTIVITY TOTALS\n";
    cout << "Gym Floor:             " << gymVisits << endl;
    cout << "Group Class:            " << groupClassVisits << endl;
    cout << "Wellness Consultations: " << consultationVisits << endl;

    cout << "\nDURATION STATISTICS\n";
    cout << "Total valid minutes:   " << totalMinutes << endl;

    cout << fixed << setprecision(2);
    cout << "Average duration:      " << averageDuration << " minutes\n";

    cout << "====================================\n";

    return 0;
}
