// it stores only unique elements

#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    // it returns all the elements in ascending order
    for (int i : s)
    {
        cout << i << endl;
    }
    s.erase(s.begin());
    cout << endl;
    for (int i : s)
    {
        cout << i << endl;
    }

    // it tells the element is present or not
    cout << endl;
    cout << s.count(5) << endl;
    cout << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << "value present at itr" << *itr << endl;
    }
}