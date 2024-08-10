#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(str[s]) != toLowerCase(str[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
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
    char str[10];
    cout << "Enter the string" << endl;
    cin >> str;
    int count = getLength(str);
    cout << checkPalindrome(str, count);
}