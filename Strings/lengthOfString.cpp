#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {

        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; i < name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[10];
    cout << "Enter your name" << endl;
    cin >> name;
    int count = getLength(name);
    cout << "the length of the string :" << count << endl;
 
    reverse(name, count);

    cout << "The reverse string is " << name;
}