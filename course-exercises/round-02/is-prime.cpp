// 4. exercise of round 2
// Program to test if given numbers are prime numbers or not

#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;


bool primeAll(int test_number){

    // if number is below 2
    if (test_number == 1)
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


bool primeHalf(int test_number){

    // if number is below 2
    if (test_number == 1)
    {   
        // return false
        return false;
    }

    // loop tests dividing the number
    // with everything from 2 to the number divided by 2
    for (int i = 2; i <= test_number/2; i++)
    {
        // if there is no remainder (the number can be divided with the testet number), return false
        if (test_number % i == 0)
        {
            return false;
        }
    }
    
    return true;
}


bool primeSquareRoot(int test_number){

    // if number is below 2
    if (test_number == 1)
    {   
        // return false
        return false;
    }

    // loop tests dividing the number
    // with everything from 2 to the number itself
    for (int i = 2; i <= sqrt(test_number); i++)
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
    
    // counter to count how many prime numbers 
    // have been discovered with primeAll function
    int count_all = 0, 
    // counter to count how many prime numbers 
    // have been discovered with primeHalf function
    count_half = 0,
    // counter to count how many prime numbers 
    // have been discovered with primeSquareRoot function
    count_root = 0;

    cout << "\nI will now test the next 10000 numbers with the -1 dividing method.\n\n";
    cout << "And the prime numbers are: ";

    // Loop calls function with numbers 1 through 10000
    for (int i = 1; i < 10000; i++)
    {
        // if function returns true
        if (primeAll(i))
        {   
            // add 1 to the counter and
            count_all++;
            // print the number
            cout << i << " ";
        }
    
    }

    cout << "\n\nI found exactly " << count_all << " prime numbers from that pool of numbers.\n";
    cout << "That is exactly " << (float(count_all)/10000)*100 << "% of the numbers tested.\n\n";

    cout << "\nI will now test the next 10000 numbers with half dividing method.\n\n";
    cout << "And the prime numbers are: ";

    // Loop calls function with numbers 1 through 10000
    for (int i = 1; i < 10000; i++)
    {
        // if function returns true
        if (primeHalf(i))
        {   
            // add 1 to the counter and
            count_half++;
            // print the number
            cout << i << " ";
        }
    
    }

    cout << "\n\nI found exactly " << count_half << " prime numbers from that pool of numbers.\n";
    cout << "That is exactly " << (float(count_half)/10000)*100 << "% of the numbers tested.\n\n";

    cout << "\nI will now test the next 10000 numbers with square root method.\n\n";
    cout << "And the prime numbers are: ";

    // Loop calls function with numbers 1 through 10000
    for (int i = 1; i < 10000; i++)
    {
        // if function returns true
        if (primeSquareRoot(i))
        {   
            // add 1 to the counter and
            count_root++;
            // print the number
            cout << i << " ";
        }
    
    }

    cout << "\n\nI found exactly " << count_root << " prime numbers from that pool of numbers.\n";
    cout << "That is exactly " << (float(count_root)/10000)*100 << "% of the numbers tested.\n\n";
    
    return 0;
}