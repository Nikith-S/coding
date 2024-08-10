#include <iostream>
using namespace std;

class A
{
public:
    void abc()
    {
        cout << "Class A function" << endl;
    }
};
class B
{
public:
    void abc()
    {
        cout << "class 2 function" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C object;
    object.B::abc();
}