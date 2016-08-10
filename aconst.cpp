#include <iostream>

int main ()
{
  double Feet = 5.7;
  const double MetersPerFoot = 0.3048;
  double Meters = Feet * MetersPerFoot;
  std::cout << "My height: " << Feet << " feet, or " << Meters << " meters!" << std::endl;
  return 0;
  
}