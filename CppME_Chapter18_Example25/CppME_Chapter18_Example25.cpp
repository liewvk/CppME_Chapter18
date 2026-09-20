#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string color;
    int speed;

public:
    Car(string b, string c, int s)
    {
        brand = b;
        color = c;
        speed = s;
    }

    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Color: " << color << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main()
{
    Car car1("Toyota", "Red", 120);
    car1.displayInfo();

    return 0;
}
