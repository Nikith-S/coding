#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
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
    cout << "the Unique Elemen is " << findUniqueElement(arr, size) << endl;
}