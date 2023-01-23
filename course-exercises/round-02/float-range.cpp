// 2. exercise of round 2
// Short program explanation

#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    float number;

    cout << "Give a number: ";
    cin >> number;

    int upper = ceil(number);
    int lower = floor(number);

    cout << "\nThe number " << number << " is in between [ " << lower << ", " << upper << " ].";

    return 0;
}