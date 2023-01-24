// 4. exercise of round 2
// Program to test if given numbers are prime numbers or not

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool isPrime(int test_number){

    // if number is below 2
    if (test_number < 2)
    {   
        // return false
        return false;
    }

    // loop tests dividing the number
    // with everything from 2 to the number itself
    for (int i = 2; i < test_number; i++)
    {
        // if there is no remainder, return false
        if (test_number % i == 0)
        {
            return false;
        }
        
    }
    
    return true;
}

int main() {
    
    // Loop calls function 0 through 10000
    for (int i = 0; i < 1000; i++)
    {
        // if function returns true
        if (isPrime(i) == true)
        {
            // print the number and a space
            cout << i << " ";
        }
    
    }
    
    return 0;
}