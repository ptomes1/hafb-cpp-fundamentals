#include "factor.h"
#include <iostream>
using namespace std;
/**
 * @brief Calculateds the number of numbers divisable by 3 from 1-30
 * 
 */
void FactorMod3()
{
    unsigned int count=0;
    for(int ix=1;ix<=30;++ix)
    {
        if(ix%3==0)
        {
            count++;
        }
    }
    cout<< "Result is now "<< count << endl;
}
