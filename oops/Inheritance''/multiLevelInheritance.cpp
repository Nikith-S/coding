#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
};

class GermanSpherad : public Dog
{
};

int main()
{

    // Dog d;
    // d.speak();

    GermanSpherad g;
    g.speak();
}