#include <iostream>
using namespace std;

int main()
{
    int age; //int: signed integers
    //cout: for system output
    std :: cout << "Hello World" << std :: endl;
    cout << "Another line under namespace std" << endl;
    cout << "Wildcats " << "WSU " << "Ogden" << endl;
    cout << "What is your age" << endl;
    // cin: for system/user input
    cin >> age;
    cout << "I see you are : "<<age << endl;
    // sizeof(): get the size of the variable
    cout << "Intergers are: " << sizeof(int)<< " bytes."<< endl;
     cout << "Min Integer value: "<< INT32_MIN <<
         " Max Integers value: "<<INT32_MAX <<" bytes"<< endl;

    return 0;
}