#include <iostream>
using namespace std;

class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0;

    void message()
    {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape
{
public:
    // Override pure virtual function
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    // Shape shapeObj; // Error: Cannot instantiate abstract class
    Circle circleObj;

    Shape *shapePtr = &circleObj;

    shapePtr->draw();
    shapePtr->message();

    return 0;
}
