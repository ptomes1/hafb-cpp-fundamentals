/**
 * @file my_array_container.cpp
 * @author your name (you@domain.com)
 * @brief Learn c++ array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */


#include <array> //Array containers
#include <iostream>
using namespace std;



int main()
{
    //To create array with library:
    //array <type, numOfElements> name;
    array<double, 5> grades{22.1,692.2,262.23,49.26,79.26};
    cout<<"Size of array: " << grades.size() << endl;
    
    cout<<"Array empty?: " << grades.empty() << endl;
    for(int index=0;index< grades.size(); ++index)
    {
        cout<<grades[index]<<endl;
    }
    cout<<"For each:"<<endl;
    for(auto grades : grades)
    {
        cout<<grades<<endl;
    }
    return 0;
}