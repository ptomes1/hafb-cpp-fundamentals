#include <array>    //for array cont
#include <iostream> // Basic I/O
#include <string>   // strings
#include <fstream>  // File stream

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize=42;

int main() {
  // create an ojbect of type ifstream
  std::ifstream in;// inputfileStream
  // open the file age.txt
  in.open("../age.txt");//relative path of the executable.
  if(in.fail())
  {
    std::cout<< "Unusable File.";
    return 1;
  }
  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1); ///Initialize elments to -1
  int age_size = 0;
  // in>>ages[ages_size];
  // in>>ages[++ages_size];
  // in>>ages[++ages_size];
  // in>>ages[++ages_size];

  while(age_size <kMaxSize && in >> ages[age_size])
  { 
    age_size++;
  }


  in.close();
  // print out the values in the array
  for(auto age: ages)
  {
    std::cout << age << endl;
  }

  // read to the end of the file


  // print out the valid values in the array


  // print out the all the values in the array

  std::ifstream in1;// inputfileStream

  // Define an ifstream object and open the file name.txt
   in1.open("../name_age.txt");//relative path of the executable.
  if(in1.fail())
  {
    std::cout<< "Unusable File.";
    return 1;
  }
  // read one name, store it in the array, and print it
 std::array<string, kMaxSize> names;
 std::array<int, kMaxSize> ages1;
  names.fill(" "); ///Initialize elments to -1
  int name_size = 0;
  int num_size1=1;
  while(name_size <kMaxSize && std::getline(in1, names[name_size]))
  { 
    
    in1 >> ages1[num_size1];
    num_size1++;
    name_size++;
  }

  // read the rest of the names in the file
for(auto name: names)
  {
    std::cout << name << endl;
    
  }


in1.close();
  // print valid elements in the names array


  // print all the elements in the names array


  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt


  // reset age and name arrays


  // read all the values from the name_age.txt file


  // print valid elements in the names and ages array


  // print all elements in the names and ages array


  return 0;
}
