// 3. exercise of round 1
// Short program explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// Function swaps array's values with pointers
// and without indexing
void arraySwap(int *f_array_p) {

    int *temp;

    for (int i = 0; i < 10; i++)
    {
        temp = (f_array_p + i);
        *temp = 1;
    }

}

//Function swaps array's values with indexing
void arrayIndexSwap(int f_array[10]) {

    for (int i = 0; i < 10; i++)
    {
        f_array[i] = 1;
    }

}


int main() {

    // Initializing array with zeroes
    int array[10] = { 0 };
    // initialize pointer of array
    int *array_p = array;

    cout << "\naliohjelma 1 indeksoinnilla\n";
    cout << "\ntaulukko ennen aliohjelmakutsua 1: ";

    // loop to print out every value in array
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }


    // call function to swap array's values
    arrayIndexSwap(array);

    cout << "\n\ntaulukko aliohjelmakutsun 1 jalkeen: ";

    // loop to print out every value in array
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\n";

    // initializes the array back to zeroes
    for (int i = 0; i < 10; i++)
    {
        array[i] = 0;
    }
    
    cout << "\n\naliohjelma 2 ilman indeksointia\n";
    cout << "\ntaulukko ennen aliohjelmakutsua 2: ";

    // loop to print out every value in array
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    // call function to swap array's values
    arraySwap(array_p);

    cout << "\n\ntaulukko aliohjelmakutsun 2 jalkeen: ";

    // loop to print out every value in array
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\n\n";

    return 0;
}