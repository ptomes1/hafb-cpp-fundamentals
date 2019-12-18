#include <array>
#include <iostream>
#include <string>
#include <fstream>  //I/O Files



/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() 
{
  // arrays that contain data
  const int kMaxSize = 20;
  std::array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  std::array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

 std:: array<std::string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

 std:: array<std::string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream
  std :: ofstream commute_file;
  // open the file commute.txt
  commute_file.open("../commute.csv");
  if(commute_file.fail())
  {
    std:: cout <<" Could open file"<<std:: endl;
    return 1;
  }
  // write commute_minutes and commute_miles to the file commute.txt
  for(int ix=0; ix<kMaxSize;++ix)
  {
    std::cout<<commute_minutes[ix]<< ","<< commute_miles[ix] << std:: endl;
    commute_file<<commute_minutes[ix]<< ","<< commute_miles[ix] << std:: endl;
    
  }

  commute_file.close();
  // create a variable of type ofstream and open the file town.txt

  std :: ofstream PeopleToTown;
  // open the file commute.txt
  PeopleToTown.open("../PeopleToTown.csv");
  if(PeopleToTown.fail())
  {
    std:: cout <<" Could open file"<<std:: endl;
    return 1;
  }
  // write commute_minutes and commute_miles to the file commute.txt
  for(int ix=0; ix<kMaxSize;++ix)
  {
    std::cout<<names[ix]<< ","<< towns[ix] << std:: endl;
    PeopleToTown<<names[ix]<< ","<< towns[ix] << std:: endl;
    
  }

  PeopleToTown.close();
  // write the towns to the file town.txt

  // create a variable of type ofstream and open the file commute_data.txt

  // write commute_minutes, commute_miles, and towns to the file commute.txt

  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt

  return 0;
}
