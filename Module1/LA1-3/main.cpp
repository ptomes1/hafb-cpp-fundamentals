#include <iostream>
#include "my_functions.h"
#include <array>
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
  array<int,10> temperatures ={-12,34,67,0,12,44,99-8,18,33};

  cout<< "The max number of temperatures is : "<< Max10(temperatures) << endl;
  for(auto temp: temperatures)
    {
      cout<< temp<< endl;
    }

  return 0;
}

// Function Defintion,
