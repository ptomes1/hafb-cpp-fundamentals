#include "carton.h"
#include <iostream>
#include <string>

//Constructors have access to private data members
/**
 * @brief Construct a new Carton:: Carton object
 * 
 */
    const double Carton::kMaxSize=100;
    const double Carton::kMinLength=6;
    const double Carton::kMinWidth=3;
    const double Carton::kMinHeight=0.25;

Carton::Carton()
{

    height_=0;
    width_=0;
    length_=0;
}

Carton::Carton(double length, double width, double height)
{
    try{
    SetMesurements( length,  width,  height);
    }
    catch(std:: out_of_range e)
    {
        std :: cout << e.what() <<'\n';
        throw;
    }
}
Carton::~Carton()
{

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

void Carton :: SetMesurements(double length, double width, double height)
{
    if(length<kMinLength)
    {
        std:: string error_msg ="Length must be greater then " + std::to_string(kMinLength);
        throw std :: out_of_range(error_msg);
    }
    //Good to go
    height_=height;
    width_=width;
    length_=length;
}

double Carton::Volume() const
{
    return length_*width_*height_;
}

    //     const double kMaxSize=100;
    //     const double kMinLength=6;
    //     const double kMinWidth=3;
    //     const double kMinHeight=0.25;