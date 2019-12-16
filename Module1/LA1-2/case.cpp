/**
 * @file case.cpp
 * @author your name (you@domain.com)
 * @brief Multiple If-Statement and Case
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    char code;
    cout <<"Enter the Specification code:";
    cin >> code;

// == operator to comapre valuse
// when comparing characters using single ticks' '
    // if(code =='S')
    // {
    //     cout<<" The item is space exploration grade."<<endl;
    // }

    //Use a switch statement
    switch(code)
    {
        case 'S':
        case 's':
            cout<<" The item is space exploration grade."<<endl;
            break;//exit your switch statement
        case 'M':
        case 'm':
            cout<<" The item is Military grade"<<endl;
            break;//exit your switch statement
        case 'C':
        case 'c':
            cout<<" The item is Commercial grade"<<endl;
            break;//exit your switch statement
        case 'T':
        case 't':
            cout<<" The item is Toy grade"<<endl;
            break;//exit your switch statement
        default:    //like else statement
            cout<< "The item is not supported."<<endl;
            break;
    }



    return 0;
}