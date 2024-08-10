#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;                         
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) // Corrected: added 'else' to clarify condition
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // Correction: mid should be calculated after updating start and end
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;                         // Mistake: This should be initialized to -1
    int mid = start + (end - start) / 2; // Mistake: mid should be calculated inside the loop

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) // Corrected: added 'else' to clarify condition
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // Correction: mid should be calculated after updating start and end
    }
    return ans;
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

    int first = firstOccurance(arr, size, key);
    int last = lastOccurance(arr, size, key);

    if (first == -1)
    { // Mistake: Handling the case when the key is not found
        cout << "Key not found in the array" << endl;
    }
    else
    {
        cout << firstOccurance(arr, size, key) << " ";
        cout << lastOccurance(arr, size, key) << " ";
    }

    return 0;
}
