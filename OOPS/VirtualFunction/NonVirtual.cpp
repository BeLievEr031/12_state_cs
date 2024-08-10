#include <iostream>
using namespace std;

class Base
{
public:
    // Declare a virtual function
    virtual void show()
    {
        cout << "Base class show function called." << endl;
    }

    void display()
    {
        cout << "Base class display function called." << endl;
    }
};

class Derived : public Base
{
public:
    // Override the base class's virtual function
    void show() override
    {
        cout << "Derived class show function called." << endl;
    }

    void display()
    {
        cout << "Derived class display function called." << endl;
    }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    basePtr->show();

    basePtr->display();

    return 0;
}
