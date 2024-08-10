#include <iostream>
using namespace std;

void recursion(string &str, int i, int j)
{
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    recursion(str, i, j);
}

int main()
{
    string s = "hello";
    recursion(s, 0, s.length() - 1);
    cout << s;
}