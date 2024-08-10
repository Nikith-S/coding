#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    if (i > j)
        return true;

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, ++i, --j); // Corrected here
    }
}

int main()
{
    string str = "nakkan";
    bool palindrome = checkPalindrome(str, 0, str.length() - 1);

    if (palindrome)
    {
        cout << "It is palindrome ";
    }
    else
    {
        cout << "It is not palindrome";
    }
}
