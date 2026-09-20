#include <iostream>
using namespace std;

class Message
{
public:
    Message()
    {
        cout << "Object created successfully." << endl;
    }

    ~Message()
    {
        cout << "Object removed from memory." << endl;
    }
};

int main()
{
    Message m1;
    cout << "Program is running." << endl;

    return 0;
}
