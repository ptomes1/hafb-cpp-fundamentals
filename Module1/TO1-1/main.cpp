#include <iostream>
#include "factor.h"
using namespace std;

// Function Prototype



// Function Prototype
void FactorMod3();

// Main function
int main()
{
  FactorMod3();     // call function
  return 0;
}
// Function Definition
void FactorMod3()
{
  int count;

  for(unsigned int x = 1; x <= 30; ++x)
  { 
    if (x % 3 == 0)
    {
      count++;
    }
  }

  cout << "Result is: " << count << endl;
  return;   // optional return on void functions
}