// Short program explanation

#include<iostream>
// headerfile
#include</home/back/github/cpp-edistyneet-piirteet/course-exercises-2/round-01/person.h>
using std::cout;
using std::cin;
using std::endl;

void isLegalAge(int age) 
{
    if (age > 18)
    {
        cout << "You are NOT a child!" << endl;
    }
    else
    {
        cout << "You are a child!" << endl;
    }
}