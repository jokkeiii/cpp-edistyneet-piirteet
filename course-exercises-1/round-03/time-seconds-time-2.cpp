// 2. exercise of round 3
// Program first calculates total seconds from given hours, minutes and seconds
// and then reverts it back to hours, minutes and seconds

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

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


int main() {
    
    // variables for user input hours, minutes and seconds
    int given_seconds, given_minutes, given_hours, 
    // variables for calculated hours, minutes and seconds
    hours, minutes, calculated_seconds, seconds, 
    // pointers for minutes and seconds
    *minutes_p = &minutes, *seconds_p = &seconds;

    // user inputs the hours
    cout << "Give number of hours to convert: ";
    cin >> given_hours;
    // user inputs the minutes
    cout << "Give number of minutes to convert: ";
    cin >> given_minutes;
    // user inputs the seconds
    cout << "Give number of seconds to convert: ";
    cin >> given_seconds;

    // calling function with given hours, minutes and seconds
    // and assigning returned seconds to seconds variable    
    calculated_seconds = timeToSeconds(given_hours, given_minutes, given_seconds);

    // calling function with previously calculates seconds, minutes pointer and seconds pointer
    // and assigning returned hours to hours variable
    hours = secondsToTime(calculated_seconds, minutes_p, seconds_p);
    
    // printing the results
    cout << endl << "Given " << given_hours << " hours, " << given_minutes << " minutes and " << given_seconds << " seconds is " << calculated_seconds << " seconds, ";
    cout << "which is " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;

    return 0;
}