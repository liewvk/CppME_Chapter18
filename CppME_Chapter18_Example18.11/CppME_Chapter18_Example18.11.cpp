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

    Student(string n, int a)
    {
        name = n;
        age = a;
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
    Student s2("David", 21);

    s1.displayInfo();
    cout << endl;
    s2.displayInfo();

    return 0;
}
