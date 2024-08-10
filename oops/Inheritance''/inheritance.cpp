#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    int setWeight(int w)
    {
        this->weight = w;
    }
};

class male : protected Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
    int getHeigh()
    {
        return this->height;
    }
};

int main()
{

    male object1;

    cout << object1.getHeigh();

    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;
    // cout << object1.color << endl;
    // object1.setWeight(12);
    // cout << "another example for weight using setweieght " << object1.weight << endl;
    // object1.sleep();
}
