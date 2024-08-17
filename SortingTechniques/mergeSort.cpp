#include <iostream>
using namespace std;

void merge(int *arr, int n, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copying values to the first size array
    int originalIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[originalIndex++];
    }

    // Copying values to the second size array
    originalIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[originalIndex++];
    }

    // Merging the two arrays
    int index1 = 0;
    int index2 = 0;
    originalIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[originalIndex++] = first[index1++];
        }
        else
        {
            arr[originalIndex++] = second[index2++];
        }
    }

    // Copy remaining elements from the first array (if any)
    while (index1 < len1)
    {
        arr[originalIndex++] = first[index1++];
    }

    // Copy remaining elements from the second array (if any)
    while (index2 < len2)
    {
        arr[originalIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int n, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // Left part of the array
    mergeSort(arr, n, s, mid);

    // Right part of the array
    mergeSort(arr, n, mid + 1, e);

    merge(arr, n, s, e);
}

int main()
{
    int arr[5] = {5, 3, 2, 4, 1};
    int n = 5;

    mergeSort(arr, n, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
