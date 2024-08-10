#include <iostream>
using namespace std;

class Animal
{
protected:
    string species;

public:
    void setSpecies(string sp)
    {
        species = sp;
    }

    void makeSound()
    {
        cout << "Animal sound!" << endl;
    }
};

class Dog : protected Animal
{
public:
    void setDogSpecies(string sp)
    {
        species = sp;
    }

    void bark()
    {
        cout << "Dog barks!" << endl;
    }

    void displaySpecies()
    {
        cout << "Species: " << species << endl; // Accessing protected base class member
    }
};

int main()
{
    Dog myDog;

    // The following lines are not allowed because setSpecies() and species are protected
    // myDog.setSpecies("Canine"); // Error: 'setSpecies' is protected within this context
    // cout << myDog.species;      // Error: 'species' is protected within this context

    // Using derived class methods to access the base class protected members
    myDog.setDogSpecies("Canine");
    myDog.displaySpecies(); // This works because displaySpecies() is a public member of Dog

    myDog.bark(); // This works because bark() is a public member of Dog

    return 0;
}
