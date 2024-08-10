#include <iostream>
using namespace std;

int roateArrayWithM(int arr[], int n, int m)
{

    int start = m + 1;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int printArry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[10];
    cout << "enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    roateArrayWithM(arr, n, 2);

    printArry(arr, n);
}