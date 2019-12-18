#include "counter.h"

    Counter Counter:: operator++()
    {
        ++count_;
        Counter temp;           //Create a dummy object
        temp.count_=count_;     //Set the value
        return temp;            //return the object
    }