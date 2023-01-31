// 3. exercise of round 3
// Short program explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct time_ty
{
    int hours, minutes, seconds;
};


int main() {
    
    // initializing variable from the structure
    time_ty time;

    bool can_continue = true;

    // hours input loop
    do {
        cout << "Give hours: ";
        cin >> time.hours;

        // if input is not between 0 and 23
        if (time.hours > 23 || time.hours < 0)
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
        cout << "Give minutes: ";
        cin >> time.minutes;
        
        // if input is not between 0 and 59
        if (time.minutes > 59 || time.minutes < 0)
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
        cout << "Give seconds: ";
        cin >> time.seconds;
        
        // if input is not between 0 and 59
        if (time.seconds > 59 || time.seconds < 0)
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

    // printing hours, minutes and seconds and
    // testing if the values are not presented 
    // with 2 numbers, add 0 to the front of them
    if (time.hours < 10)
    {
        cout << "Time is 0" << time.hours << ":";
    } else
    {
        cout << "Time is " << time.hours << ":";
    }

    if (time.minutes < 10)
    {
        cout << "0" << time.minutes << ":";
    } else
    {
        cout << "" << time.minutes << ":";
    }

    if (time.seconds < 10)
    {
        cout << "0" << time.seconds << " (hh:mm:ss)" << endl;
    } else
    {
        cout << "" << time.seconds << " (hh:mm:ss)" << endl;
    }
    
    // initializing a pointer to the structure
    time_ty *time_p = &time;

    // printing, using the pointer, hours, minutes and seconds and
    // testing if the values are not presented 
    // with 2 numbers, add 0 to the front of them
    if (time_p->hours < 10)
    {
        cout << "Time is 0" << time_p->hours << ":";
    } else
    {
        cout << "Time is " << time_p->hours << ":";
    }

    if (time_p->minutes < 10)
    {
        cout << "0" << time_p->minutes << ":";
    } else
    {
        cout << "" << time_p->minutes << ":";
    }

    if (time_p->seconds < 10)
    {
        cout << "0" << time_p->seconds << " (hh:mm:ss)" << endl;
    } else
    {
        cout << "" << time_p->seconds << " (hh:mm:ss)" << endl;
    }

    // initializing two more variables of the structure
    time_ty time_second, time_third;

    // giving values to the second structure
    time_second.hours = 10, time_second.minutes = 25, time_second.seconds = 30;

    // assigning the second structures values to the third structure
    time_third.hours = time_second.hours, time_third.minutes = time_second.minutes, time_third.seconds = time_second.seconds;

    // test if the contents of the second and the third structure are identical
    if (time_third.hours == time_second.hours && time_third.minutes == time_second.minutes && time_third.seconds == time_second.seconds) {
        // print out success message
        cout << "Contents of the second and the third structures are identical" << endl;
    // if not print out the values from both structures
    } else
    {
        cout << "The second structures time is " << time_second.hours << ":" << time_second.minutes << ":" << time_second.seconds << " (hh:mm:ss)";
        cout << " while the third structures time is " << time_third.hours << ":" << time_third.minutes << ":" << time_third.seconds << " (hh:mm:ss)" << endl;
    }
    
    return 0;
}