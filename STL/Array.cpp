#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
    cout << "element at 2 Index = " << a.at(2) << endl;
    cout << "Empty or Not " << a.empty() << endl; // it returns boolean

    // front element
    cout << "first element" << a.front() << endl;

    // backElement
    cout << "last element " << a.back() << endl;
}
