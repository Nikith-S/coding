#include <iostream>
using namespace std;
int main()
{

    // int a = 10;
    // int *ptr = &a;
    // cout << ptr << endl;

    // cout << *ptr << endl;

    // cout << sizeof(ptr) << endl;

    int num = 5;
    int *p = &num;
    cout << "Before" << num << endl;
    (*p)++;
    cout << "After" << num << endl;

    // copying a pointer

    int *q = p;
    cout << q << endl;
    cout << *q << endl;
}