#include <iostream>
using namespace std;

int main()
{
    //Calculate BMI Weight(kg)/[Height(meters)]^2
    //Floating point variables: lfoat, double
    float weight=0,height=0,bmi=0;
    cout<< "Enter Weight"<<endl;
    cin >> weight;
    cout<< "Enter Height"<<endl;
    cin >> height;
    bmi=weight/(height*height);
    cout<< "Your BMI is: "<< bmi <<endl;
    return 0;
}