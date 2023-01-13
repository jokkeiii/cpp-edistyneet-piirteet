// 3. exercise of round 1
// Short program explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void arraySwap(int array[10]){
    
    bool use_index;
    
    cout << "Use indexing?(true/false)?" << endl;
    cin >> use_index;

    if (use_index)
    {
        for (int i = 0; i < 10; i++)
        {
           array[i] = 1;
        }
        
    }
    
}

int main() {
    
    // Initializing array with zeroes
    int array[10] = {0};

    // loop to print out every value in array
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    
    arraySwap(&array);
    
    return 0;
}