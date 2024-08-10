#include <iostream>
using namespace std;

int movingZerosToRight(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
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
    int arr[5] = {0, 1, 0, 2, 3};

    movingZerosToRight(arr, 5);

    printArry(arr, 5);
}