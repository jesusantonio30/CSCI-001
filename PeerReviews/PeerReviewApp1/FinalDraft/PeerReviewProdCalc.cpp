#include <iostream>
#include <iomanip>
using namespace std;

/*
                        Welder Production Rate Calculator

                                Example Scenario
    ( A welder works for 8 hours and produces frames totaling 8 hours of production time, e.g. four 2hr frames, resulting in a 100% production rate for the day. )

        - Welder clocks in for shift, entering start time (hours and minutes).
        - Enters total production time (hours and minutes) for all frames produced during the shift.
        - Clocks out of shift, entering end time (hours and minutes).
        - The program calculates the total shift duration and production rate as a percentage, based on the ratio of production time to shift time.
*/

int main() {

        // ============================================================================
                                    // SHIFT START

            // Using seconds for time; results in more accurate production rate
            int shiftStartHours;     // 0-23 for hours
            int shiftStartMinutes;   // 0-59 for minutes

                                    // SHIFT END

            int shiftEndHours;
            int shiftEndMinutes;
        // ============================================================================

                                    // FRAME TIME
        
            int frameHours;
            int frameMinutes;
        // ============================================================================

        cout << "\n======================================================================" << endl;
        
        cout << "\n\t\tClock-in/out instructions!" << endl;
        cout << "**** Enter 0 - 23 for hours, and 0 - 59 for minutes ****" << endl;


        cout << "\n\t---------------- Clock-In ----------------" << endl;

        cout << "\n\t\t\tEx. 5 (5am)";
        cout << "\n\t\t\t  Hour: ";
         cin >> shiftStartHours;

        cout << "\n\t\t       Ex. 30 (30min)";
        cout << "\n\t\t\tMinutes: ";
         cin >> shiftStartMinutes;

            // want variable to be read-only
            const float SHIFTSTART = (shiftStartHours * 3600) + (shiftStartMinutes * 60);     // Calculating exact time shift started


        cout << "\n\t--------------- Frame Hours --------------" << '\n'

             << "\n\t\tEnter total production hours " << '\n'
             << "\t\t\tEx. 8 (8hrs)"
             << "\n\t\t\t  Hours: ";
         cin >> frameHours;
        
        cout << "\n\t\t\tEx. 35 (35min)"
             << "\n\t\t\t  Minutes: ";
         cin >> frameMinutes;

            const float FRAMETOTALHOURS = ((frameHours * 3600) + (frameMinutes * 60)) / 3600;


        cout << "\n\t---------------- Clock-Out ---------------" << '\n'

             << "\n\t\t\tEx. 14 (2pm)"
             << "\n\t\t\t  Hour: ";
         cin >> shiftEndHours;

        cout << "\n\t\t\tEx. 5 (5min)"
             << "\n\t\t\t  Minutes: ";
         cin >> shiftEndMinutes;

            const float SHIFTEND = (shiftEndHours * 3600) + (shiftEndMinutes * 60);
    

        cout << "\n\t---------- Avg Daily Production ----------" << '\n';

            float totalShiftHours = (SHIFTEND - SHIFTSTART) / 3600;
            float productionRate = (FRAMETOTALHOURS / totalShiftHours) * 100;

        cout << fixed << setprecision(2);
        cout << "\n\t\t     Hours Worked: " << totalShiftHours << "hr(s)" << endl;
        cout << "\t\t   Production Rate: " << productionRate << '%' << '\n';

        cout << "\n======================================================================" << endl;

    return 0;
}
