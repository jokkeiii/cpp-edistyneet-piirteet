// 1. exercise of round 3
// Short program explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int secondsToTime(int given_seconds, int *minutes, int *seconds) {

    int hours;

    // calculates the hours by dividing the given seconds by 3600
    hours = given_seconds / 3600;
    
    // calculates the minutes by dividing the remaining seconds by 60
    *minutes = (given_seconds % 3600) / 60;

    // calculates the seconds by taking the remainder of given seconds divided by 60
    *seconds = given_seconds % 60;

    // return the hours
    return hours;
}

int main() {
    
    int given_seconds, hours, minutes, seconds,
    *minutes_p = &minutes, *seconds_p = &seconds;

    // user inputs the seconds
    cout << "Give number of seconds to convert: ";
    cin >> given_seconds;
    
    // calling function with given seconds and minutes pointer and seconds pointer
    // and assigning returned hours to hours variable
    hours = secondsToTime(given_seconds, minutes_p, seconds_p);
    
    // printing the results
    cout << endl << given_seconds << " seconds is " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;

    return 0;
}