#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(10);
    v.push_back(9);

    cout << "finding 6 :" << binary_search(v.begin(), v.end(), 6) << endl;
}