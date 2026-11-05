
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Programme and weekday names
    string programmes[3] = {
        "Yoga",
        "Strength",
        "Wellness Workshop"
    };

    string days[5] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday"
    };

    // Attendance data for each programme and weekday
    int attendance[3][5] = {
        {24, 31, 28, 35, 30},
        {38, 42, 36, 45, 41},
        {18, 22, 25, 20, 27}
    };

    int programmeTotals[3] = {0, 0, 0};
    int dayTotals[5] = {0, 0, 0, 0, 0};

    int grandTotal = 0;
    int highDemandCount = 0;

    cout << "===============================================\n";
    cout << "       VUKAFIT ATTENDANCE ANALYTICS\n";
    cout << "===============================================\n";

    // Display attendance table
    cout << "\nATTENDANCE REPORT\n\n";

    cout << left << setw(22) << "Programme";

    for (int day = 0; day < 5; day++)
    {
        cout << setw(12) << days[day].substr(0, 3);
    }

    cout << endl;
    cout << "---------------------------------------------------------------\n";

    for (int programme = 0; programme < 3; programme++)
{
    cout << left << setw(22) << programmes[programme];

    for (int day = 0; day < 5; day++)
    {
        cout << attendance[programme][day];

        if (attendance[programme][day] >= 40)
        {
            cout << " HIGH DEMAND";
            highDemandCount++;
        }

        cout << "\t";
    }

    cout << endl;
}

    // Calculate totals for each programme and weekday
    for (int programme = 0; programme < 3; programme++)
    {
        for (int day = 0; day < 5; day++)
        {
            programmeTotals[programme] += attendance[programme][day];
            dayTotals[day] += attendance[programme][day];
            grandTotal += attendance[programme][day];
        }
    }

    // Programme weekly totals and daily averages
    cout << "\nPROGRAMME STATISTICS\n";
    cout << "===============================================\n";

    int highestProgrammeIndex = 0;

    for (int programme = 0; programme < 3; programme++)
    {
        double average = programmeTotals[programme] / 5.0;

        int highestDayIndex = 0;

        for (int day = 1; day < 5; day++)
        {
            if (attendance[programme][day] >
                attendance[programme][highestDayIndex])
            {
                highestDayIndex = day;
            }
        }

        cout << "\nProgramme: " << programmes[programme] << endl;
        cout << "Weekly total: " << programmeTotals[programme] << endl;
        cout << fixed << setprecision(2);
        cout << "Daily average: " << average << endl;
        cout << "Highest attendance day: "
             << days[highestDayIndex] << endl;

        if (programmeTotals[programme] >
            programmeTotals[highestProgrammeIndex])
        {
            highestProgrammeIndex = programme;
        }
    }

    // Display total attendance per weekday
    cout << "\nWEEKDAY TOTALS\n";
    cout << "===============================================\n";

    int busiestDayIndex = 0;

    for (int day = 0; day < 5; day++)
    {
        cout << days[day] << ": " << dayTotals[day] << endl;

        if (dayTotals[day] > dayTotals[busiestDayIndex])
        {
            busiestDayIndex = day;
        }
    }

    // Final attendance statistics
    double overallAverage = grandTotal / 15.0;

    cout << "\nFINAL ANALYTICS\n";
    cout << "===============================================\n";

    cout << "Busiest weekday: "
         << days[busiestDayIndex] << endl;

    cout << "Programme with highest weekly attendance: "
         << programmes[highestProgrammeIndex] << endl;

    cout << "High demand attendance values: "
         << highDemandCount << endl;

    cout << "Grand total attendance: "
         << grandTotal << endl;

    cout << fixed << setprecision(2);
    cout << "Overall average attendance: "
         << overallAverage << endl;

    cout << "===============================================\n";

    return 0;
}