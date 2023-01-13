// 2. exercise of round 1
// Short program explanation

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void swap(int *f_one, int *f_two){

    int temp;
    temp = *f_one;
    *f_one = *f_two;
    *f_two = temp;

}

int main() {
    
    int first = 1, second = 2;
    
    cout << "first = " << first << ", second = " << second << " before swap 1" << endl;
    cout << endl;

    swap(&first, &second);

    cout << "first = " << first << ", second = " << second << " after swap 1" << endl;
    cout << endl;

    int third = 3, fourth = 4;

    cout << "third = " << third << ", fourth = " << fourth << " before swap 2" << endl;
    cout << endl;

    swap(&third, &fourth);

    cout << "third = " << third << ", fourth = " << fourth << " after swap 2" << endl;
    cout << endl;

    return 0;
}