#include <iostream>
using namespace std;
int main()
{
    int *ptr = NULL;
    int first = 780;
    ptr = &first;
    cout << "ptr now points to location: " << ptr << " which contains the int value: " << *ptr << endl;
    cout << "let us see if the old address still contains our value" << endl;

    long *second;
    long third = 50;
    second = &third;
    cout << second << " value: " << *second << endl;
    return 0;
}