#include <iostream>
#include "factor.h"
using namespace std;

int main()
{
    FactorMod3();
    FactorModx(10);
    FactorModxRange(5,100);
    unsigned int getter=GetFactorModxRange(5,100);
    cout << "This is main count "<< getter;
    return 0;
}