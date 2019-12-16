/**
 * @file mysquares.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <iomanip> // for formatted output
#include <cmath> //for sqrt() function
using namespace std;

const int kMaxCount=5;

int main()
{
    
    cout << "Number             Square root" <<endl;
    cout << "------             -----------" <<endl;
    cout << setiosflags(ios :: showpoint);
    for(int count=1; count < kMaxCount; ++count)
    {
        cout << setw(4)<<count<< setw(25) << sqrt(count) << endl;
    }

    cout << 81 << sqrt(81)<<" "<< endl;
    return 0;
}