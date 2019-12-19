#include <iostream>
//using namespace std;
#include <array>
#include <algorithm>

// Local Prototypes
void fun(int const& value); 


int main()
{
    std:: array<int,3> myarray={4,7,9};
    std:: cout<<"First element:"<<myarray.front()<<std::endl;
    std:: cout<<"Last element:"<<myarray.back()<<std::endl;
    std:: cout<<"Size of Array:"<<myarray.size()<<std::endl;

    for(int ix=0;ix<myarray.size();ix++)
    {
         std:: cout<<"Element at "<<ix << " is "<<myarray[ix] <<std::endl;
    }
    std :: cout << "Loop using iterators notation. using built-in functions for "<< 
    " begin and end members of containers" <<std:: endl;
    for(auto it=std::begin(myarray); it!=std::end(myarray); ++it)
    {
        std:: cout << *it <<" is at memory location "<< it<< std::endl;
    }
    //Range based loops
    std:: cout <<"Range based for loop"<< std:: endl;
    for(const auto &value: myarray)
    {
        std:: cout<< value << std:: endl;
    }
    //For each loops.
    //Functor: function that at like an object.
    std::cout<<"Using for_each algorithm, using a function or functor"<< std::endl;
    std::for_each(std:: begin(myarray),std::end(myarray),fun);
  
    //Lambads:[](){}
    //[] to take any local variables in the scope
    //() declare the parameters the functions uses\
    // {} declare the body of the your function
    std::cout<<"Using for each algorithem, using lambda" << std::endl;
    std::for_each(std:: begin(myarray),std::end(myarray),[](int const& value){std::cout 
    << value << "\n";});


    return 0;
}

// Local function definitions
void fun(int const& value) 
{
    std::cout << value << "\n";
}