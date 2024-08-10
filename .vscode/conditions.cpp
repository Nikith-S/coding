#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter ch " << endl;
    cin >> ch;
    if (ch >= 'a' & ch <= 'z')
    {
        cout << "this is in lower case";
    }
    else if (ch >= '0' & ch <= '9')
    {
        cout << "number";
    }
}
