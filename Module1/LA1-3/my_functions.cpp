#include <iostream>
#include "my_functions.h"
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