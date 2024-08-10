#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "speaking" << endl;
    }
};

class Human
{

public:
    int color;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Multiple : public Animal, public Human
{
};

int main()
{
    Multiple m;
    m.speak();
    m.bark();
}