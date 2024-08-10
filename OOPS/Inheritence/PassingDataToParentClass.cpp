#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    Base(int a)
    {
        x = a;
        cout << "Base class constructor called with value " << x << "." << endl;
    }

    ~Base()
    {
        cout << "Base class destructor called." << endl;
    }
};

class Derived : public Base
{
public:
    int y;
    Derived(int a, int b) : Base(a)
    {
        y = a;
        cout << "Derived class constructor called with value " << y << "." << endl;
    }

    ~Derived()
    {
        cout << "Derived class destructor called." << endl;
    }
};

int main()
{
    cout << "Creating a Derived object:" << endl;
    Derived d(5, 10);
    cout << "Derived object created." << endl;

    return 0;
}
