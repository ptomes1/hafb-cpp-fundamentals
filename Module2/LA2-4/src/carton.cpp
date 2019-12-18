#include "carton.h"
#include <iostream>

//Constructors have access to private data members
/**
 * @brief Construct a new Carton:: Carton object
 * 
 */
Carton::Carton()
{
    height_=0;
    width_=0;
    length_=0;
}

double Carton:: length()
    {
        return length_;
    }

double Carton:: width()
{
    return width_;
}
        
double Carton:: height()
{
    return height_;
}
void Carton:: set_length(double length)
{
    length_=length;
}
void Carton:: set_width(double width)
{
    width_=width;
}
void Carton:: set_height(double height)
{
    height_=height;
}
void Carton :: ShowInfo()
{
  std::cout <<"Box Height: "<< height()<< std::endl;
  std::cout <<"Box Width: "<< width()<< std::endl;
  std::cout <<"Box Lenth: "<< length()<< std::endl;
}