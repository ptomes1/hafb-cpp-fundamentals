#include <iostream>
#include "factor.h"


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
    cout << "Result is now "<< count << endl;
}
/**
 * @brief Calculateds the number of numbers divisable by mod_number from 1-30
 * 
 * @param mod_number num to mod by
 */
void FactorModx(int mod_number)
{
    unsigned int count=0;
    for(int ix=1;ix<=30;++ix)
    {
        if(ix % mod_number == 0)
        {
            count++;
        }
    }
    cout<< "Result is now "<< count << endl;
}

void FactorModxRange(int mod_number, int max_range)
{
    unsigned int count=0;
    for(int ix=1;ix<=max_range;++ix)
    {
        if(ix % mod_number == 0)
        {
            count++;
        }
    }
    cout<< "Result is now "<< count << endl;
}

unsigned int GetFactorModxRange(int mod_number, int max_range)
{
    unsigned int count=0;
    for(int ix=1;ix<=max_range;++ix)
    {
        if(ix % mod_number == 0)
        {
            count++;
        }
    }
    return count;
}