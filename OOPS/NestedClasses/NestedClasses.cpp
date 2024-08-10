#include <iostream>
using namespace std;

class OuterClass
{

public:
    int outerData = 495;

    // Nested class definition
    class InnerClass
    {

    public:
        int innerData = 45;

        void showInnerData()
        {
            cout << "Inner class data: " << innerData << endl;
        }
    };

    void showOuterAndInnerData()
    {
        InnerClass obj;

        cout << "Outer class data: " << outerData << endl;
        cout << "inner class data: " << obj.innerData << endl;
    }
};

int main()
{
    // Create an object of the outer class
    OuterClass outerObj;

    // Create an object of the inner class
    // OuterClass::InnerClass innerObj;  //Not Given in textbook

    return 0;
}
