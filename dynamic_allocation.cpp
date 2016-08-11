#include <iostream>

using namespace std;
int main()
{
    float *fPtr = NULL;
    fPtr = new float;
    *fPtr = 2.2;
    delete fPtr;
    cout << "Data at " << fPtr << ": " << *fPtr << endl;

}