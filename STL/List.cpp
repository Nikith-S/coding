// it is implemented on the basis of doubly link list
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    // to copy the list of l to new list
    list<int> n(l);
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;
    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << endl;
    }

    // size
    cout << "size of the list" << l.size() << endl;
}