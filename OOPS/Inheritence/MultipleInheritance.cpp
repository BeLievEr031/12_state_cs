#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Mammal
{
public:
    void breathe()
    {
        cout << "Breathing..." << endl;
    }
};

class Dog : public Animal, public Mammal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

int main()
{
    Dog myDog;

    // Accessing members from both base classes
    myDog.eat();     // From Animal class
    myDog.breathe(); // From Mammal class
    myDog.bark();    // From Dog class

    return 0;
}
