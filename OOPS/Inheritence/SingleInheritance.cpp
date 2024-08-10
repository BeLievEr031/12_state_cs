#include <iostream>
using namespace std;

// Base Class (Parent)
class Animal
{
public:
    string name;
    int age;

    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }
};

// Derived Class (Child)
class Dog : public Animal
{
public:
    string breed;

    void bark()
    {
        cout << "I can bark!" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Breed: " << breed << endl;
    }
};

int main()
{
    // Create an object of the Derived Class
    Dog myDog;

    // Access members of the base class
    myDog.name = "Buddy";
    myDog.age = 3;

    // Access members of the derived class
    myDog.breed = "Golden Retriever";

    // Call methods from both base and derived classes
    myDog.eat();   // From base class
    myDog.sleep(); // From base class
    myDog.bark();  // From derived class

    // Display information
    myDog.display();

    return 0;
}
