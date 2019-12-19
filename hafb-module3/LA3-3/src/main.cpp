#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance n1(1,2);
  n1.ShowDist();

  Distance n2(10,2.5);
  Distance n3(1,100);
  Distance n4;
  n4 = n2+n3+n1;
  n4.ShowDist();
  cout << n4 << endl;
  return 0;
}