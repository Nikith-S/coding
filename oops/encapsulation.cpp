#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {

        return this->age;
    }

    int setAge(int a)
    {
        age = a;
    }
};

int main()
{
    Student nikith;
    nikith.setAge(16);
    cout << nikith.getAge() << endl;
}