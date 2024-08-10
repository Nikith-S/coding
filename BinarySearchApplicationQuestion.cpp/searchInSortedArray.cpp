#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;

    while (start <= end)
    {
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

    return -1;
}

int findPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[] = {8, 10, 17, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    cout << "Pivot element is at index: " << getPivot(arr, n) << endl;
    int position = findPosition(arr, n, key);

    if (position != -1)
    {
        cout << "Element " << key << " is at index: " << position << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
