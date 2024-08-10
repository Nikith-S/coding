#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2;
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1; // Return -1 if the key is not found
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to be found: ";
    cin >> key;

    int index = binarySearch(arr, size, key);
    if (index != -1)
    {
        cout << "Index of " << key << ": " << index << endl;
    }
    else
    {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}
