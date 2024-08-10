#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    // to intialize the vector and to give the size at the starting itself
    vector<int> a[5, 1]; // 5 is the size and 1 is assigned to all them
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i];
    // }

    // to get the size of memory allocated we can use
    cout << "capacity" << v.capacity() << endl;

    // to write the element in that we should do
    v.push_back(1);
    cout << "capacity" << v.capacity() << endl;

    // to clear vector at that size will be zero but not the capacity
    v.clear();
}