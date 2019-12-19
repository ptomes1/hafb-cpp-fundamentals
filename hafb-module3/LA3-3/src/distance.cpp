// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

 void Distance:: ShowDist() const
 {
    std:: cout << feet() << "\'-" << inches() << "\"" <<std:: endl;
 }
/**
 * @brief Pluse + Operator for distance objects
 * 
 * @param d2 Secpmd Dostamce pbkect
 * @return Distance operator + : si,e pf se;f +d2 objects
 */
 Distance Distance :: operator +(Distance d2) const
 {
   int feet=feet_+d2.feet();
   float inch=inches_+d2.inches();
   while(inch>12.0)
   {
      feet++;
      inch=inch-12;
   }
    return Distance(feet,inch);
 }
 Distance Distance :: operator -(Distance d2) const
 {
   int feet=feet_+d2.feet();
   float inch=inches_+d2.inches();
   while(inch>12.0)
   {
      feet++;
      inch=inch-12;
   }
    return Distance(feet,inch);
 }

 std:: ostream &operator <<(std::ostream &os, const Distance &distance)
 {

    //Do not include a \n or endl character
    os<< "Feet: "<< distance.feet_<<" Inches: "<<distance.inches_;
    return os;
 }