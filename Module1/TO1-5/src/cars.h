#ifndef CARS_H_
#define CARS_H_

int HorsePower();       //"standard" namespace

namespace lamborghini
{
    int HorsePower(); //inside Lamborghini namespace
    void cout();
}
namespace porsche
{
    int HorsePower(); // inside porsche namespace
}



#endif /* !CARS_H_ */
