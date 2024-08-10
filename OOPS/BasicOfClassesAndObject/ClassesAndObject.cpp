#include <iostream>
using namespace std;

class PersonWithPublic
{
public:
    string name = "Test";
    string favColor = "Red";
};

class PersonWithPrivate
{
private:
    string name = "Test";
    string favColor = "Red";

public:
    void display()
    {
        cout << name << favColor;
    }
};

// More Explaination Given in Inheritance
class PersonWithProtected
{
protected:
    string name = "Test";
    string favColor = "Red";
};

// Pointer to Object Members;
class PersonWithObjectPointer
{
public:
    string name = "Test";
    string favColor = "Red";

    void display()
    {
        cout << name;
    }
};

// Passing Refrence to object;
class PersonWitPassingObjectReference
{
public:
    string name = "Test";
    string favColor = "Red";

    void display()
    {
        cout << name << " " << favColor << endl;
    }

    void updateData(PersonWitPassingObjectReference &obj)
    {
        obj.name = "Sandeep Rajak";
        obj.favColor = "Blue";
    }
};

int main()
{

    // 🔥🔥 Object with Public access specifier. 🔥🔥
    PersonWithPublic publicObj;
    cout << publicObj.name << publicObj.favColor << endl;

    // // 🔥🔥 Object with private  access specifier. 🔥🔥
    PersonWithPrivate privateObj;
    cout << privateObj.name << privateObj.favColor; // Error!
    privateObj.display();                           // No Error Reason A class function can access Private.

    // // 🔥🔥 Object with private  access specifier. 🔥🔥
    PersonWithProtected protecteObj;
    cout << protecteObj.name << protecteObj.favColor; // Error!

    // // 🔥🔥 Object with pointer. 🔥🔥
    PersonWithObjectPointer normalObj;   // Noramal Object
    PersonWithObjectPointer *objWithPtr; // Hold Memory address of another object of same class
    objWithPtr = &normalObj;
    objWithPtr->display();

    // 🔥🔥 Object with pointer. 🔥🔥
    PersonWitPassingObjectReference obj;
    // Before passing by refrence;
    obj.display();
    obj.updateData(obj);
    // After passing by refrence;
    obj.display();
    return 0;
}