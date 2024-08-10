#include <iostream>
using namespace std;

int peakMountain(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int n;
    cout << "Enter the number of array elements" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int peakIndex = peakMountain(arr, n);
    cout << "The peak element is at index: " << peakIndex << endl;
    cout << "The peak element is: " << arr[peakIndex] << endl;

    return 0;
}
