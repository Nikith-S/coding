#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Nikith" << endl;
    }
    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

// for operator overloading

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output" << value2 - value1;
    }
};

// run time polymorphism

class Animal
{

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{

    Dog d;
    d.speak();

    // A object;
    // object.sayHello();
    // object.sayHello("nikith");

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;
}