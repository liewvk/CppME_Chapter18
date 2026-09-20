#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
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
    Student s2("Emily", 21);

    cout << "Student 1" << endl;
    s1.displayInfo();

    cout << endl;
    cout << "Student 2" << endl;
    s2.displayInfo();

    return 0;
}
