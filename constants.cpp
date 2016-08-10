#include <iostream>

int main()
{
  const int startups = 2;
  const float pi = 3.14;
  std::cout << "startups: " << startups << std::endl;
  // startups = 2;
  
  float radius = 5, area;
  std::cout << area << std::endl;
  area = radius * radius * pi;
  std::cout << "Area is: " << area << std::endl;
  return 0;
}