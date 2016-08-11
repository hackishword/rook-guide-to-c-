#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;
};

class Rectangle 
{
public:
    Rectangle();
    void setBase(float length);
    void setHeight(float length);
    float getHeight();
    float getBase();
    float findArea();
    float findPerimeter();
private:
    float Base;
    float Height;
};


void Rectangle::setBase(float length)
{
    Base = length;
}

float Rectangle::getBase()
{
    return Base;
}

void Rectangle::setHeight(float length)
{
    Height = length;
}

float Rectangle::getHeight()
{
    return Height;
}

Rectangle::Rectangle()
{
    Base = 5;
    Height = 3;
}

int main()
{
    Point input;
    input.x = 5;
    cout << "the point's x value: " << input.x << endl; 

    Rectangle r;
    cout << "initially, Rectangle has base and height: " << r.getBase() << " and " << r.getHeight() << endl;
    float b;
    cout << "Please input the length of the base: ";
    cin >> b;
    r.setBase(b);
    cout << "Now the rectangle has base and height: " << r.getBase() << " and " << r.getHeight() << endl;
    return 0;
}