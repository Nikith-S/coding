#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Nikith";
    m[15] = "bat";
    m[2] = "criket";

    m.insert({5, "niki"});
    cout << "befor erase";
    for (auto i : m)
    {

        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
    cout << "finding count " << m.count(13) << endl;

    cout << endl;
    cout << "After erase" << endl;
    m.erase(15);
    for (auto i : m)
    {

        cout << i.first << " " << i.second << endl;
    }
}