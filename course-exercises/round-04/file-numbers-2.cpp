// 2. exercise of round 4
// Short program explanation

#include<iostream>
#include<fstream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;

int main() {
    // input string to read from file
    string input;
    // input number to do calculations 
    // counter to count number of rows that have been read aka number of numbers
    int input_num, count = 0, 
    // sum to calculate sum of all numbers
    sum = 0;
    // average to calculate average of all numbers
    float average;
    // initialize input file variable
    ifstream data_file("C:\\Users\\track\\Github\\cpp-edistyneet-piirteet\\course-exercises\\round-04\\Random.txt", ifstream::in);

    // if file opened successfully
    if (data_file.is_open())
    {   
        // read first line from file
        getline(data_file, input);
        // loop to go through whole file
        while (data_file)
        {       
            // adds 1 to counter
            count++;
            // convert the number from string to int
            input_num = stoi(input);
            // add read number to sum
            sum += input_num;
            // read the next line
            getline(data_file, input);
        }
        // calculate the average of the numbers
        average = float(sum) / count;
        // print out the counter, sum and average
        cout << "\nThe number of numbers in the file is:\t" << count << endl;
        cout << "\nThe sum of all the numbers is:\t\t" << sum << endl; 
        cout << "\nThe average from all the numbers is:\t" << average << "\n\n";
    // if file opening failed
    } else
    {   
        // print out error message
        cout << "\nError opening the file...\n";
    }
    
    return 0;
}