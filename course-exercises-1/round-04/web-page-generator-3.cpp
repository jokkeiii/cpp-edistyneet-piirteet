// 3. exercise of round 4
// Create very simple html file with user given name and paragraph

#include<iostream>
#include<fstream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::string;

int main() {
    // strings for user input name and paragraph, 
    // string to write to file, file path and name string
    string name, paragraph, html, file_path_and_name;

    // declare the file name and path to variable
    // USE DOUBLE BACKSLASHES!!!
    file_path_and_name = "C:\\Users\\track\\Github\\cpp-edistyneet-piirteet\\course-exercises\\round-04\\index.html";

    // user inputs
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Describe yourself: ";
    getline(cin, paragraph);

    // add user inputs and text to string for writing to file
    html = "<html>\n<head>\n</head>\n<body>\n\t<center>\n\t\t<h1>" + name + "</h1>\n\t</center>\n" +
    "\t<center>\n\t\t<hr />\n\t\t" + paragraph + "\n\t\t<hr />\n\t</center>\n</body>\n</html>";

    // open file for writing
    ofstream data_file(file_path_and_name, ofstream::out);
    // if file is open
    if (data_file.is_open())
    {   
        // write the html variable string to the file
        data_file << html;
        // close the file
        data_file.close();
    // if file opening failed
    } else
    {   
        // print out error message
        cout << "\nError opening the file...\n";
    }

    return 0;
}