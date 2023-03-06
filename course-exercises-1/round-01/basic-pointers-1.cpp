// 1. exercise of round 1
// Short programn explanation

#include<iostream>

using std::cout;
using std::endl;
using std::nullptr_t;

int main() {
    
    // int "number" variable and a pointer variable to that "number"
    int *number_p, number;
    
    number_p = &number;

    // assign 7 to the "number" variable through the dereference of pointer variable
    *number_p = 7;

    // print the values in both variables
    cout << "' Number_p ' value is " << number_p << endl;
    cout << "' Number ' value is " << number << endl;
    cout << endl;

    // print the address of both variables
    cout << "' &Number_p ' value is " << &number_p << endl;
    cout << "' &Number ' value is " << &number << endl;
    cout << endl;

    // print dereferences
    cout << "' &*Number_p ' value is " << &*number_p << endl;
    cout << "' *&Number ' value is " << *&number << endl;
    cout << endl;
    
    // print the sizes of each variable
    cout << "' Number_p ' variable size is " << sizeof(number_p) << " bytes." << endl;
    cout << "' Number ' variable size is " << sizeof(number) << " bytes." << endl;
    cout << endl;
    
    int *second_number_p;

    cout << "' Second_number_p ' default value is " << second_number_p << endl;
    cout << endl;

    second_number_p = nullptr;

    cout << "' Second_number_p ' value as nullptr is " << second_number_p << endl;

    return 0;
}