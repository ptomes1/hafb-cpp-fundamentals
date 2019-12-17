#include <iostream>
#include "my_functions.h"
#include <array>
using namespace std;



int Sum(int num1, int num2)
{
    return num1+num2;
}

void UpdateStep(int& step)
{
    cout << "Current Step :"<< step << endl;
    step++;
    step = step+1;
    step +=1;
    cout << "New Step : " << step << endl;
}

int Max(int num, int num2)
{
        if(num>num2)
        {
            return num;
        }
        else
        {
            return num2;
        }
}

int Max3(int num, int num2,int num3)
{
     if(num>num2 && num>num3)
        {
            return num;
        }
    else if(num2>num && num2>num3)
        {
            return num2;
        }
    else
        {
            return num3;    
        }
}

int Max10(std :: array<int, 10> nums)
{
    int highest=0;
    for(int ix=0;ix<10;ix++)
    {
        if(nums[ix]>highest)
        {
            highest=nums[ix];
        }
    }
    return highest;
}