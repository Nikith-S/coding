#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j;
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    int arr[6] = {1, 34, 67, 89, 96, 21};

    InsertionSort(arr, 6);

    cout << "the sorted array are" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}