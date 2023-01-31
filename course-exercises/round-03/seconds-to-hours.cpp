// 1. exercise of round 3
// Short program explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int secondsToHours(int given_seconds, int *minutes, int *seconds) {

    int hours;
    float temp_minutes, temp_seconds, flo_seconds;

    temp_minutes = given_seconds / 3600.0;

    cout << "\ntemp_calc\t" << temp_minutes << endl;

    hours = temp_minutes;

    cout << "\nhours\t" << hours << endl;

    temp_seconds = (temp_minutes - hours) * 60.0;

    *minutes = temp_seconds;

    cout << "\nminutes\t" << *minutes << endl;

    flo_seconds = (temp_seconds - *minutes) * 60.0;

    cout << "\ntemp_seconds\t" << temp_seconds << endl;

    cout << "\nseconds\t" << flo_seconds << endl;

    return hours;
}

int main() {
    
    int given_seconds, hours, minutes, seconds,
    *minutes_p = &minutes, *seconds_p = &seconds;

    cout << "Give number of seconds to convert: ";
    cin >> given_seconds;

    secondsToHours(given_seconds, minutes_p, seconds_p);
    
    return 0;
}