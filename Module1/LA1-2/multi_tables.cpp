/**
 * @file multi_tables.cpp
 * @author your name (you@domain.com)
 * @brief Display multiplication tables based on 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

const int kMax=10;


int main()
{
    int number;
    cout<<"Enter a number to print mulitcation tables :" <<endl;
    cin >> number;

    for(int num1 = 1; num1 < number+1; ++num1)
    {
        for(int num2=1;num2<=kMax;num2++)
        {
            cout << setw(4)<< num1*num2 << " ";
        }
        cout<< endl;
        
    }
    return 0;
}