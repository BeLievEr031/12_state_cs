#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Default Constructor
    Person()
    {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called." << endl;
    }

    // Copy Constructor
    Person(const Person &p)
    {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called." << endl;
    }

    // Method to display person information
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    // Default constructor
    Person person1;
    person1.display();

    // Copy constructor
    Person person3 = person1;
    person3.display();

    return 0;
}
