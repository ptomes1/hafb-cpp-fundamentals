#include <iostream>
#include "carton.h"
#include <array>

using namespace std;

const int kMaxSize=10;

int main() {
  // create a Carton object using the default constructor
  Carton Box;
  Box.ShowInfo();
  Box.set_height(10);
  Box.set_width(5);
  Box.set_length(20);
  Box.ShowInfo();
  Carton Box1(6,2,3);
  Box1.ShowInfo();
  std:: cout<<"Valume of the box is:" <<Box1.Volume()<<std:: endl;
    // create a Carton object using the other constructor

  // create an array of Cartons
  std:: array<Carton,kMaxSize> Boxes; 
  // add some valid elements to the array
  Boxes[0]=Carton(12,41,52);
  // loop through the array
  for(int ix=0;ix<10;ix++)
  {
    Boxes[ix]=Carton(ix+6,ix+5,ix+4);
  }
  // print out the volume of packages
 for(auto box:Boxes)
  {
    box.ShowInfo();
  }
  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}