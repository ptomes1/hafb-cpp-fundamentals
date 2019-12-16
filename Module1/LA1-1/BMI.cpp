#include <iostream>
using namespace std;

const float kMeterToInches =39.37;
const float kKiloToPound=2.204;
const int kBMIImperial = 703;
const float kLowBMILimit=18.5;
const float kHighBMILimit=24.9;

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
    cout<< "Your BMI (Metric) is: "<< bmi <<endl;

    //Calculate BMI(imperial: ( weight(lbs)*703)/[Height(in)]^2
    weight=weight*kKiloToPound;
    height=height*kMeterToInches;
    bmi=(weight*kBMIImperial)/(height*height);
    cout << "Your BMI (imperial) is :"<< bmi << endl;
    
    
    //Task: Print if they are in a good BMI range 18.5 to 24.9
    // && to test two conditions
    if(bmi > kLowBMILimit && bmi< kHighBMILimit)
    {
        cout << "Your BMI is "<< bmi << " is good" << endl;
    }
    else
    {
        cout << "Your BMI is "<< bmi << " is bad" << endl;
    }
    
    cout << "Thank you for using BMI Program" << endl;

    return 0;
}