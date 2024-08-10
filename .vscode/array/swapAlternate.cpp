#include <iostream>
using namespace std;

int swapAlternative(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the array Element " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapAlternative(arr, size);
    printArray(arr, size);
}