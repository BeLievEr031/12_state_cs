#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    // Default Constructor
    Rectangle()
    {
        width = 0;
        height = 0;
        cout << "Default constructor called. Width = " << width << ", Height = " << height << endl;
    }

    // Parameterized Constructor with one parameter (for square)
    Rectangle(int side)
    {
        width = side;
        height = side;
        cout << "Square constructor called. Width = " << width << ", Height = " << height << endl;
    }

    // Parameterized Constructor with two parameters
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
        cout << "Rectangle constructor called. Width = " << width << ", Height = " << height << endl;
    }

    // Method to calculate the area
    int area() const
    {
        return width * height;
    }

    // Method to display dimensions
    void display() const
    {
        cout << "Width = " << width << ", Height = " << height << endl;
    }
};

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
