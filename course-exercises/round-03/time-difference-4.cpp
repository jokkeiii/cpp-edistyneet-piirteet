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


int main() {
    
    // initializing 2 variables from the structure
    time_ty time_first, time_second;

    bool can_continue = true;

    // hours input loop
    do {
        cout << "Give hours: ";
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
        cout << "Give minutes: ";
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
        cout << "Give seconds: ";
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

    return 0;
}