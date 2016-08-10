#include <iostream>

using namespace std;

int main()
{
  int x = 0;
  int y = 0;
  
  cout << "Please enter a value for x: " << endl;
  cin >> x;
  if (cin.fail())
  { 
    cout << "That is not a valid data type";
  }
//  int x = 0;
//  cout << "Please enter a value for x: " << endl;
//  cin >> x;
//  cout << "Great! You entered " << x << endl;
  return 0;
}