/**
 * @file myarray.cpp
 * @author your name (you@domain.com)
 * @brief Learn about C-Style arrays and C== array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <cmath>
#include <iostream>
using namespace std;

const int kMaxNum=5;



int main()
{

    int grades[kMaxNum]={10,20,30,10,50};
    float avg=0;
    
    // for(int num =0 ; num<kMaxNum; ++num)
    // {
    //     // cout << "Enter your exam grades" << endl;
    //     // cin >> grades[num]; //access each element using []
    //     avg=avg + grades[num];
    // }
    // cout << "Average is :"<< avg/kMaxNum << endl;
    // //2D arrays: types name[row][col]

    int bi_array[3][5]=
    {
        {1,2,3,4,5},
        {4,5,22,33,99},
        {89,33,22,11,0}
    };

    for(int ix=0;ix<3; ++ix)
    {
        for(int x=0;x<5;++x)
        {
            cout << bi_array[ix][x] << " ";
        }
        cout << endl;

    }    

    return 0;
}
