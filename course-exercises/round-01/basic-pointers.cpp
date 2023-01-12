// 1. excersice of round 1
// Short programn explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    // int "number" variable and a pointer variable to that "number"
    int number, *number_p = &number;
    
    // assign 7 to the "number" variable through the dereference of pointer variable
    *number_p = 7;

    // print the values in both variables
    cout << "'Number' value is " << number << endl;
    cout << "'Number_p' value is " << number_p << endl;
    cout << endl;

    // print the address of both variables
    cout << "'Number' address is " << &number << endl;
    cout << "'Number_p' address is " << &number_p << endl;
    cout << endl;
    
    // print the sizes of each variable
    cout << "'Number' variable size is " << sizeof(number) << " bytes." << endl;
    cout << "'Number_p' variable size is " << sizeof(number_p) << " bytes." << endl;
    cout << endl;
    
    int *second_number_p;

    cout << "'Second_number_p' value is " << second_number_p << endl;

    return 0;
}