#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    // Constructor
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Friend function declaration
    friend void displayBoxDimensions(const Box &b);
};

// Friend function definition
void displayBoxDimensions(const Box &b)
{
    cout << "Length: " << b.length << endl;
    cout << "Width: " << b.width << endl;
    cout << "Height: " << b.height << endl;
}

int main()
{
    Box box(10, 20, 30);
    displayBoxDimensions(box); // Access private members via friend function

    return 0;
}
