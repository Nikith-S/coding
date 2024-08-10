#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        // for round 1 to n-1
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}


int main()
{

    int arr[6] = {1, 34, 67, 89, 96, 21};

    bubbleSort(arr, 6);

    cout << "the sorted array are" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}