// 1. exercise of round 4
// Test character array size maximums in stack and heap

#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::nothrow;

/* 
Käytettävä configuraatio: Ubuntu Desktop 22.04 with compiler gcc

Seuraavan kokoisia paikallisia taulukoita onnistui varata: 1000 kilotavua, 5000 kilotavua ...    
Tilavaraus epäonnistui ensimmäisen kerran seuraavaan kokoon: 9000 kilotavua    
Pienentämällä kokoa raja löytyi: noin 8 350 kilotavua


Dynaamisen muistin alueelta onnistui seuraavat tilavaraukset: 100 000 kilotavua, 150 000 kilotavua    
Tilavaraus dynaamisen muistin alueelta epäonnistui seuraavalla koolla: 2 147 480 kilotavua 
*/ 

// constant for stack array
const int SIZE = 8350000;

// function to test max array size
void testStack(){
    
    // initialize character array and set size with const
    char array[SIZE] = {};

    // print the size
    cout << "The largest character array size is: " << SIZE/1000 << " kilobytes\n\n";
}


int main() {

    // call stack function
    testStack();

    // counter for loop 
    int i;
    
    // infinite loop, add 10000 to counter every iteration
    for (i = 0; ; i += 10000)
    {   
        // define array pointer with new operator and character array, size is i
        // added nothrow to not crash the program when error occurs
        char* array_p = new (nothrow) char[i];

        // if counter is less than 1 million
        if (i < 1000000)
        {   
            // print the size (= counter) in kilobytes 
            cout << i/1000 << " kilobytes\n\n";

        // if counter is less than 1 billion (= 1000 million)
        } else if (i < 1000000000)
        {   
            // print the size (= counter) in megabytes
            cout << i/1000000 << " megabytes\n\n";

        // after counter is 1 billion
        } else {
            // print the size (= counter) in gigabytes
            cout << i/1000000000.0 << " gigabytes\n\n";
        }
        
        // if the array pointer is nullptr, maximum array size has been reached
        if (array_p == nullptr) {
            // and exits from loop
            break;
        }

        // delete the allocation for the next one
        delete[] array_p;
    }

    // print the last successful counter value, the array size (bytes), in kilobytes
    cout << "The largest character array size is: " << (i-10000)/1000 << " kilobytes\n\n";
    
    return 0;
}