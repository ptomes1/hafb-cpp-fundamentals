#include "height.h"
#include <iostream>
#include <string>


//Friend Functions have access to private data memebers
// when wrting the definition, Do not include th the frinds
// keyword, nor the class :: scope
// Just like a regular function with special access
void print_feet(Height h1)
{
    std:: cout << "Your height in inches is :" << 
        h1.inches_<< std:: endl;
    std:: cout << "Your height in Feet is :" << 
        h1.inches_/12<< std:: endl;
}

Height::Height()
{
    inches_=0;
}

Height::~Height()
{
 
}

void Height::set_Height(double inches)
{
    inches_=inches;
}
