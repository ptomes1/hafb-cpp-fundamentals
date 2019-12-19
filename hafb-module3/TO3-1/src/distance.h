#include <iostream>

#pragma

class Distance
{
    private:
        int feet_;
        float inches_;
    public:


        //Constructor
        Distance():feet_(0),inches_(0){}
        Distance(int feet,float inches):feet_(feet),inches_(inches){}
        ~Distance(){}
        //Gets&Setters
        int feet() const{return feet_;}
        void set_feet(int feet) {feet_=feet;}
        
        float inches() const{return inches_;}
        void set_inches(int inches) {inches_=inches;}
        // Other Methods
        void ShowDist() const;

        Distance operator +(Distance d2) const;
        friend std:: ostream &operator <<(std::ostream &os, const Distance &distance);
        Distance operator -(Distance d2) const;
        void update_distance(int ft, float in);

};

// distance::distance()
// {
// }

// distance::~distance()
// {
// }
