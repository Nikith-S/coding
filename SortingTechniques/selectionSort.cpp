#include <iostream>
using namespace std;

int selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minimumIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minimumIndex])
            {
                minimumIndex = j;
            }
        }
        swap(arr[minimumIndex], arr[i]);
    }
}

int main()
{

    int arr[6] = {1, 34, 67, 89, 96, 21};

    selectionSort(arr, 6);

    cout << "the sorted array are" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}