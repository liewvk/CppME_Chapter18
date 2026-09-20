#include <iostream>
using namespace std;

class Rectangle
{
public:
    double length;
    double width;

    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }

    double area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r1;

    cout << "Length = " << r1.length << endl;
    cout << "Width  = " << r1.width << endl;
    cout << "Area   = " << r1.area() << endl;

    return 0;
}
