#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }

protected:
    string species;

    void setSpecies(string sp)
    {
        species = sp;
    }
};

class Dog : protected Animal
{
public:
    int dogAge = 8;
    void setDogSpecies(string sp)
    {
        setSpecies(sp); // Accessing protected base class method
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

class Puppy : public Dog
{
public:
    void showSpecies()
    {
        // Accessing protected members of Dog (which were inherited as protected from Animal)
        cout << "Puppy's species: " << species << endl;
    }
};

int main()
{
    Dog myDog;

    // Direct access to Animal's public members is not allowed
    // myDog.eat(); // Error: 'eat' is protected within this context

    // Indirect access via Dog's public methods
    myDog.setDogSpecies("Canine");
    myDog.displaySpecies(); // Works because displaySpecies() is public in Dog
    myDog.bark();           // Works because bark() is public in Dog

    // Example of further derived class
    Puppy myPuppy;
    myPuppy.showSpecies(); // Works because showSpecies() is public in Puppy

    return 0;
}
