#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Parameterized Constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Parameterized constructor called." << endl;
    }

    // Method to display person information
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{

    // Parameterized constructor
    Person person2("Alice", 28);
    person2.display();

    return 0;
}
