#include <iostream>
using namespace std;

const float kMeterToInches =39.37;
const float kKiloToPound=2.204;
const int kBMIImperial = 703;


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
    return 0;
}