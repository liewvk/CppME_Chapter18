#include <iostream>
using namespace std;

class Student
{
public:
    int mark;

    Student(int m)
    {
        if (m >= 0 && m <= 100)
            mark = m;
        else
            mark = 0;
    }

    void displayMark()
    {
        cout << "Mark = " << mark << endl;
    }
};

int main()
{
    Student s1(85);
    Student s2(150);

    s1.displayMark();
    s2.displayMark();

    return 0;
}
