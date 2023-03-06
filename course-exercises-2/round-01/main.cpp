// 1. exercise of round 1
// Starting of classes and objects with person class
#include<iostream>
// headerfile
#include</home/back/github/cpp-edistyneet-piirteet/course-exercises-2/round-01/person.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    // algorithm starts here
    int age{};

    cout << "Give your age: ";
    cin >> age;

    isLegalAge(age);

    return 0;
}