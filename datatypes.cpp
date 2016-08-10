#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int f = 2;
    cout << f << endl;
    double y;
    y = f;
    cout << y << endl;
    int x;
    double z = 2.9;
    x = round(z);
    cout << " x = " << x << endl;
    int br = int(3.3);
    cout << "br is: " << br << endl;
    cout << "now for auto: " << endl;
    auto myVar = 3;
    auto myVar3 = &myVar;
    cout << "myVar: " << myVar << "myVar3: " << myVar3 << endl;
    std::vector<int> v;
    v.push_back(2);

    return 0;
}