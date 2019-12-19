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
   int feet=feet_-d2.feet();
   float inch=inches_-d2.inches();
   while(inch<0)
   {
      inch=inch+12.0;
      feet--;
   }
  
    return Distance(feet,inch);
 }

   bool Distance :: operator <(Distance d2) const
 {
     float inch1=feet_*12+inches_;
     float inch2=d2.feet()*12+d2.inches();
    if(inch1<inch2)
    {
        return true;
    }
    return false;
 }

   bool Distance :: operator ==(Distance d2) const
 {
     float inch1=feet_*12+inches_;
     float inch2=d2.feet()*12+d2.inches();
    if(inch1==inch2)
    {
        return true;
    }
    return false;
 }
 std:: ostream &operator <<(std::ostream &os, const Distance &distance)
 {

    //Do not include a \n or endl character
    os<< "Feet: "<< distance.feet_<<" Inches: "<<distance.inches_;
    return os;
 }
 void Distance:: update_distance(int ft, float in)
{
   set_feet(ft);
   set_inches(in);
}

  Distance Distance :: operator =(Distance d2)
 {
     std:: cout<<"New Assignement"<< endl;
    int feet=d2.feet();
    float inches=d2.inches();
    return Distance(feet,inches);
 }

 Distance:: Distance(const Distance& dist)
 {
     std:: cout<<"Copy constructor invoked" << std::endl;
     feet_=dist.feet_;
     inches_=dist.inches_;
 }
