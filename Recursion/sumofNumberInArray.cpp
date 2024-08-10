#include <iostream>
using namespace std;

int sumOfNumbers(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return arr[0];
    }

    int remainingElement = sumOfNumbers(arr + 1, n - 1);
    int sum = arr[0] + remainingElement;
    return sum;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int sum = sumOfNumbers(arr, n);

    cout << "the sum is " << sum << endl;
}