#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    // Default Constructor
    Rectangle();

    // Parameterized Constructor with one parameter (for square)
    Rectangle(int side);

    // Parameterized Constructor with two parameters
    Rectangle(int w, int h);

    // Method to calculate the area
    int area()
    {
        return width * height;
    }

    // Method to display dimensions
    void display()
    {
        cout << "Width = " << width << ", Height = " << height << endl;
    }
};

// 🔥🔥 Constructor definition outside the class
Rectangle::Rectangle()
{
    cout << "I am default constructor.";
}

Rectangle::Rectangle(int side)
{
    width = side;
    height = side;
    cout << "Square constructor called. Width = " << width << ", Height = " << height << endl;
}

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
    cout << "Rectangle constructor called. Width = " << width << ", Height = " << height << endl;
}

int main()
{
    // Using the default constructor
    Rectangle rect1;
    rect1.display();
    cout << "Area: " << rect1.area() << endl;

    // Using the parameterized constructor with one argument (square)
    Rectangle rect2(5);
    rect2.display();
    cout << "Area: " << rect2.area() << endl;

    // Using the parameterized constructor with two arguments (rectangle)
    Rectangle rect3(4, 6);
    rect3.display();
    cout << "Area: " << rect3.area() << endl;

    return 0;
}
