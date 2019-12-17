#include <iostream>
#include "my_functions.h"
using namespace std;


//prototype

// Main Function
int main()
{
  int x=Sum(2,3);
  cout<<"This is main's sum :"<<x<< endl;
  cout << "Number before Update()"<< x<< endl;
  UpdateStep(x);
  cout << "Number after Update()"<< x<< endl;
  return 0;
}

// Function Defintion
