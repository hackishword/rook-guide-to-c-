#include <iostream> // for cin and cout
#include <fstream> // for ifstream and ofstream
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("TextFile.txt");
    outFile.open("OutputTextFile.txt");

    int number = 5;

    cout << " number is: " << number << endl;

    inFile >> number;

    cout << "now number is: " << number << endl;

    char Letter[5] = { 'A', 'B' };

    outFile << Letter;

    inFile.close();
    outFile.close();

    return 0;
}