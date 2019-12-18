#pragma once

//create your first class
class Height
{
    private:
        double inches_;
    public:
        //Default COnstructor
        Height();
        ~Height();
        //Setter
        void set_Height(double inches);
        double get_Height() const{return inches_;};

        friend void print_feet(Height h1);
};