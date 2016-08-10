#include <iostream>

int main()
{
  std::string word = "I am a standard string";
  std::cout << word << std::endl;
  
  int mynum = 5;
  double doubles = 2.0533;
  float thefake = 2.9445;
  double thereal = mynum + doubles + thefake;
  
  std::cout << "the sume of the numbers is: " << thereal << std::endl;
  std::cout.precision(2);
  
  std::cout << "the sume of the numbers with precision is: " << thereal << std::endl;
  
  return 0;
}