#include <iostream>
using namespace std;

void sayDigit(int number, string arr[])
{

    if (number == 0)
        return;

    int digit = number % 10;
    number = number / 10;

    sayDigit(number, arr);

    cout << arr[digit] << " ";
}

int main()
{
    string arr[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int number;
    cin >> number;

    sayDigit(number, arr);
}