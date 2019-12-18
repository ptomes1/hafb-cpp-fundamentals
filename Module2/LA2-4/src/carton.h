#pragma once

//create your first class
class Carton
{
    private:
        double length_;// "_" states that is is private
        double width_;
        double height_;
    public:
        // Constructor: build/create your object
        Carton();
        //Getters
        double length();
        double width();
        double height();
};  //Must have a ";"