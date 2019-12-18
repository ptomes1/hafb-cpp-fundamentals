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
        Carton(double length, double width, double height);
        //Getters
        double length();
        double width();
        double height();
        //Setters
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);
        //Other Methods
        void ShowInfo();

};  //Must have a ";"