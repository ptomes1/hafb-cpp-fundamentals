#include <iostream>
using namespace std;

int main()
{
    cout    << "\nData Type  Bytes"
            << "\n---------  ----"
            << "\nint       "<< sizeof(int)      //integer
            << "\nchar      "<< sizeof(char)    //Characters 1 byte
            << "\nlong      "<< sizeof(long)    //Long integers
            << "\nbool      "<< sizeof(bool)   // boolean
            << endl;
    return 0;
}