// 4. exercise of round 3
// Short program explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct time_ty
{
    int hours, minutes, seconds;
};

// function calculates total hours and remaining minutes and seconds from given total seconds 
int secondsToTime(int given_seconds, int *minutes, int *seconds) {

    // variable for calculations result
    int hours = 0;

    // calculates the hours by dividing the given seconds by 3600
    hours = given_seconds / 3600;
    
    // calculates the minutes by dividing the remaining seconds by 60
    *minutes = (given_seconds % 3600) / 60;

    // calculates the seconds by taking the remainder of given seconds divided by 60
    *seconds = given_seconds % 60;

    // return the hours
    return hours;
}


// function calculates total seconds from given hours, minutes and seconds
int timeToSeconds(int given_hours, int given_minutes, int given_seconds) {
    
    // variable for calculations result
    int seconds = 0;

    // add calculated seconds from hours to "seconds"
    seconds += given_hours * 3600;

    // add calculated seconds from minutes to "seconds"
    seconds += given_minutes * 60;

    // add given seconds to "seconds"
    seconds += given_seconds;

    // return the seconds
    return seconds;
}

time_ty timeDifference(time_ty time_first, time_ty time_second) {
    
    // initializing variable from the structure
    time_ty time_calculated;

    time_calculated.hours = time_first.hours - time_second.hours;

    time_calculated.minutes = time_first.minutes - time_second.minutes;

    time_calculated.seconds = time_first.seconds - time_second.seconds;

    // return the calculated structure contents
    return time_calculated;
}

int main() {
    
    // initializing 2 variables from the structure
    time_ty time_first, time_second, time_result;

    int first_time_in_seconds, second_time_in_seconds;
    bool can_continue = true;

// inputs of first structure
    // hours input loop
    do {
        cout << "Give first hours: ";
        cin >> time_first.hours;

        // if input is not between 0 and 23
        if (time_first.hours > 23 || time_first.hours < 0)
        {   
            // print error message
            cout << "I will only accept hours between 0 and 23!\n";
            // set can_continue to false
            can_continue = false;
        
        // if tests passed
        } else
        {   
            // can continue
            can_continue = true;
        }
    
    // if can_continue is not true loop back
    } while (!can_continue);
    
    // minutes input loop
    do {
        cout << "Give first minutes: ";
        cin >> time_first.minutes;
        
        // if input is not between 0 and 59
        if (time_first.minutes > 59 || time_first.minutes < 0)
        {   
            // print error message
            cout << "I will only accept minutes between 1 and 59!\n";
            // set can_continue to false
            can_continue = false;
        
        // if tests passed
        } else
        {   
            // can continue
            can_continue = true;
        }

    // if can_continue is not true loop back
    } while (!can_continue);
    
    // seconds input loop
    do {
        cout << "Give first seconds: ";
        cin >> time_first.seconds;
        
        // if input is not between 0 and 59
        if (time_first.seconds > 59 || time_first.seconds < 0)
        {   
            // print error message
            cout << "I will only accept seconds between 0 and 59!\n";
            // set can_continue to false
            can_continue = false;
        
        // if tests passed
        } else
        {   
            // can continue
            can_continue = true;
        }

    // if can_continue is not true loop back
    } while (!can_continue);    


// inputs of second structure
    // hours input loop
    do {
        cout << "Give second hours: ";
        cin >> time_second.hours;

        // if input is not between 0 and 23
        if (time_second.hours > 23 || time_second.hours < 0)
        {   
            // print error message
            cout << "I will only accept hours between 0 and 23!\n";
            // set can_continue to false
            can_continue = false;
        
        // if tests passed
        } else
        {   
            // can continue
            can_continue = true;
        }
    
    // if can_continue is not true loop back
    } while (!can_continue);
    
    // minutes input loop
    do {
        cout << "Give second minutes: ";
        cin >> time_second.minutes;
        
        // if input is not between 0 and 59
        if (time_second.minutes > 59 || time_second.minutes < 0)
        {   
            // print error message
            cout << "I will only accept minutes between 1 and 59!\n";
            // set can_continue to false
            can_continue = false;
        
        // if tests passed
        } else
        {   
            // can continue
            can_continue = true;
        }

    // if can_continue is not true loop back
    } while (!can_continue);
    
    // seconds input loop
    do {
        cout << "Give second seconds: ";
        cin >> time_second.seconds;
        
        // if input is not between 0 and 59
        if (time_second.seconds > 59 || time_second.seconds < 0)
        {   
            // print error message
            cout << "I will only accept seconds between 0 and 59!\n";
            // set can_continue to false
            can_continue = false;
        
        // if tests passed
        } else
        {   
            // can continue
            can_continue = true;
        }

    // if can_continue is not true loop back
    } while (!can_continue);


    // calling function with first and second structures
    // and assigning the return to third structure
    time_result = timeDifference(time_first, time_second);

    cout << "The time difference is " << time_result.hours << " hours, " << time_result.minutes << " minutes and " << time_result.seconds << " seconds." << endl; 

    return 0;
}