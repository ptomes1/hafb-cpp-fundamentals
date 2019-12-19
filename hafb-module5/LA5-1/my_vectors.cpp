#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;

int main()
{
    std:: vector<int> vec;

    vec.push_back(100);//both,front and back
    vec.push_back(200);
    std:: cout<< vec.front()<< std::endl;
    std:: cout<< vec.back()<< std::endl;
     vec.push_back(300);
     std:: cout<< "Using index notatition"<<std::endl;
     for(size_t i=0;i<vec.size();i++)
     {
         std::cout<<vec[i]<<std::endl;
     }
    std::cout<<"Using an iterators"<<std::endl;
    for(auto it=std::begin(vec); it !=std::end(vec);++it)
    {
        std:: cout<< *it <<std::endl;
    }

    std::cout<<"Range based for loop"<<std::endl;
    for(const auto& value: vec)
    {
        std:: cout<< value <<std::endl;
    }

    //Define and initialize a vector. Use{} with comma separated values
    std::vector<int> vec2={-1,-1,-1,-1,-1};
    for(int ix:vec2)
    {
        std::cout<< ix;
    }
    std::cout<<std::endl;

    int max=50;
    std:: vector<int> vec3(max,-1);
    for(int x:vec3)
    {
        std::cout<< x << " ";
    }
    std::cout<<std::endl;


    return 0;
}