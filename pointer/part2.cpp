#include <iostream>
using namespace std;

int main()
{

    // int arr[10] = {23, 122, 41, 67};
    /*   cout << "the address of first memeory block is " << arr << endl;
       cout << "the address of second memeory block using & operator" << &arr[1] << endl;

       cout << "4th  " << *arr << endl;
       (*arr)++;
       cout << "Increment   " << *arr << endl;

       cout << " 8  " << arr[2] << endl;
       cout << " 9  " << *(arr + 2) << endl;

       int i = 3;
       cout << i[arr];


    int temp[10] = {1, 2, 3};
    cout << sizeof(temp) << endl;
    int *ptr = &temp[0];
    cout << sizeof(&ptr) << endl;
    cout << sizeof(*ptr) << endl;


    int a[20] = {1, 2, 3, 4, 5};
    cout << &a[0] << endl;
    cout << a << endl;
    cout << &a << endl;

    int *p = &a[0];
    cout << *p << endl;
    cout << &p << endl;
    cout << p << endl;


    int arr[10] = {1, 2, 4, 6, 7, 8};
    int *ptr = &arr[0];

    ptr = ptr + 1;
    cout << &ptr << endl;
      */

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];

    cout << *c << endl;
}