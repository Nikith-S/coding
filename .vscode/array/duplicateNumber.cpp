#include <iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];

        for (int i = 1; i < n; i++)
        {
            ans = ans ^ i;
        }
    }

    return ans;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "the Uniwue element is " << findUnique(arr, size) << endl;
}