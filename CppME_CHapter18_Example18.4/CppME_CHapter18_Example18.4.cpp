#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student()
    {
        name = "Unknown";
        age = 0;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s1;
    s1.displayInfo();

    return 0;
}
