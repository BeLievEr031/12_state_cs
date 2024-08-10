#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal Eating..." << endl;
    }
};

class Mammal
{
public:
    void eat()
    {
        cout << "Mammal Eating..." << endl;
    }
};

class Dog : public Animal, public Mammal
{
public:
};

int main()
{
    Dog myDog;

    // myDog.eat(); Error
    myDog.Mammal::eat();

    return 0;
}
