// Pseudo Code
/* 
    1. Welder begins shift
    2. Welder scans into frame
    3. Takes amount of hours provided by frame as input (eg. frame takes 2hrs to complete, so you input 2 for hours)
    4. Keeps track of hours
        a. steps 2 - 3 are repeated throughout the shift
            i. If repairs occur, enter time that repair began and ended
            ii. Accumulate Repair Time throughout the shift
        b. Take into account two 10 min breaks and 30min lunch
            i. If a meeting occurs, enter time when it started and ended 
    5. Welder ends shift
    6. Production Hours are added   
    7. Production Hours are then divided by amount of Hours Clocked-In for shift and multiplied by 100 to get percent
    10. Production Rate percent is stored in a Daily Production Rate
    11. By the end of the month, the average Production Rate is calculated 
        and stored in Monthly Production Rate
    
    ============================================================================

    What is needed?

        - Shift start 
            * Use 24hr format (0-23 for hours, 0-59 for minutes)
            * request hours and minutes as separate integers (e.g., 8 for hour, 0 for minute in "08:00")
                a. int shiftStartHour; (This will hold 0-23)
                b. int shiftStartMinute; (These will hold 0-59)
                c. const int shiftStart = (shiftStartHours * 3600) + (shiftStartMinutes * 60)

        - Time given by frame
            * Prompt an input that takes hour of frame and minutes of frame each time they start a new frame
                a. int frameHours;
                b. int frameMinutes
                    - at end of shift, store both variables into int productionHours = ( (frameHours * 3600) + (frameMinutes * 60) ) / 3600;
        - Repair Time 
            * Prompt input that takes in int repairStart and int repairEnd
                
        - Meeting Duration
            * Prompt input that tkes in int meetingStart and int meetingEnd

        - End of shift
                    
*/

#include <iostream>
#include <iomanip>
using namespace std;

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

                                    // PRODUCTION RATE

        // ============================================================================
        cout << "\n======================================================================" << endl;
        cout << "\n\t\tClock-in instructions!" << endl;
        cout << "**** Enter 0 - 23 for hours, and 0 - 59 for minutes ****" << endl;


        cout << "\n\t------------- Shift Start -------------" << '\n';
        cout << "\nHour: ";
        cin >> shiftStartHours;
        cout << "\nMinutes: ";
        cin >> shiftStartMinutes;
        cout << "Shift Start: " << shiftStartHours << ':' << shiftStartMinutes << endl;

            // want variable to be read-only
            const float shiftStart = (shiftStartHours * 3600) + (shiftStartMinutes * 60);     // Calculating exact time shift started

        cout << "\n\t------------- Frame Hours -------------" << '\n'
             << "Enter total production hours " << '\n'
             << "Hours: ";
        cin >> frameHours;

        cout << "\nMinutes: ";
        cin >> frameMinutes;

            const int frameTotalHours = ((frameHours * 3600) + (frameMinutes * 60)) / 3600;
        cout << "Frame time: " << frameHours << "hr(s) " << frameMinutes << "min(s)" << endl;

        cout << "\n\t------------- Shift End -------------" << '\n'
             << "Enter time of Clock-out" << '\n'
             << "Hour: ";
        cin >> shiftEndHours;

        cout << "\nMinutes: ";
        cin >> shiftEndMinutes;

            const float shiftEnd = (shiftEndHours * 3600) + (shiftEndMinutes * 60);
        cout << "Shift End: " << shiftEndHours << ':' << shiftEndMinutes << endl;
    
        cout << "\n\t-------- Avg Daily Production -------" << '\n';

        float totalShiftHours = (shiftEnd - shiftStart) / 3600;
        float productionRate = (frameTotalHours / totalShiftHours) * 100;

        cout << fixed << setprecision(2);
        cout << "Hours Worked: " << totalShiftHours << endl;
        cout << "Production Rate: " << productionRate << '%' << endl;

    return 0;
}
