#include <iostream>
using namespace std;

class A
{
public:
    void fun1()
    {
        cout << "Inside Funtion 1" << endl;
    }
};
class B : public A
{

public:
    void fun2()
    {
        cout << "Inside Function 2" << endl;
    }
};

class C : public A
{
public:
    void fun3()
    {
        cout << "Inside Function 3" << endl;
    }
};
int main()
{
    A ob0;
    B ob1;
    C ob2;

    ob0.fun1();
    ob1.fun2();
    ob2.fun3();
}