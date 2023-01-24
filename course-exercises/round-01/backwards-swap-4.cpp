// 4. exercise of round 1
// Swap array's values from last to the first

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// const to hold array's size
const int ARRAY_SIZE = 10;


// function to reverse its values from last to first
void reverseSwap(int *array){

    // initializing needed variables
    int temp;
    // start pointervariable has arrays address 
    int *start = array;
    // end pointervariable has arrays last value's address
    int *end = array + ARRAY_SIZE - 1;
    
    // this while loops through the array reversing the values
    while(start < end){
        
        // temp has start address's value
        temp = *start;
        // switch end address's value to start address
        *start = *end;
        // // switch old start address's value from temp
        // to end address
        *end = temp;
        // continue to the next value
        start++;
        // also continue to the next (previous) value
        end--;
    }
    
}


int main() {

    // initialize array with a size of const
    // and values from 1 to 10   
    int array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "\narray's values before reversing: \n";

    // print out the array's values
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << array[i] << " ";
    }
    
    // call function with array
    reverseSwap(array);
    
    cout << "\n\narray's values after reversing: \n";

    // print out the array's values
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << "\n\n";

    return 0;
}