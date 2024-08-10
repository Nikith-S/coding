#include <iostream>
using namespace std;

int pairsum(int arr[], int n, int s)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
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
    cout << "the pair sum = " << endl;
    pairsum(arr, size, 4);
}