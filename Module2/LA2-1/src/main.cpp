#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() 
{
  // create a variable of type string
  std :: string name="weber Waldo";
  // print it out
  std::cout<< name<<std::endl;

  std::cout<<"Enter a String?"<<std::endl;
  // get a string with spaces, use getlin()
  std::getline(std::cin,name);
  // add two strings together
  string title;
  string formal= title +" "+name;
  std::cout<< name<<std::endl;
  // how long is the string
  std:: cout<<"The size of the name is "<<name.size()<< std::endl;
  std:: cout<<"The size of the title is "<<title.size()<< std::endl;
  std:: cout<<"The length of the title is "<<title.size()<< std::endl;
  std:: cout<<"The length of the formal is "<<formal.size()<< std::endl;
  // use [] to get an individual character

  // get name and commute information from a user
  int minutes,miles;
  // get commute information and name from a user
getline(std::cin, name);
std::cin>>minutes;
std::cin>> miles;
  // the string function find
std::cout<<name<<" has "<<minutes<< " miles "<<miles<< std::endl;
  // the string function replace
std:: string story="The dragons are flying over the mountains. They are hunting for a "
"place to settle for the waldo night. What they see is endless.";
std:: cout<< "waldo is at "<< story.find("waldo")  << endl;
story.replace(story.find("waldo"), 5, "XXXXX"); // (5)
std ::cout<<story;
  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
