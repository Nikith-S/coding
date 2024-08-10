#include <iostream>
#include <climits>
using namespace std;

void findUnion(int arr1[], int n, int arr2[], int m)
{

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i];
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j];
            j++;
        }
    }

    while (i < n)
    {
        cout << arr1[i];
        i++;
    }

    while (j < m)
    {
        cout << arr2[j];
        j++;
    }
}

void findArrayIntersection(int arr1[], int n, int arr2[], int m)
{

    // for (int i = 0; i < n; i++)
    // {
    //     int element = arr1[i];

    //     for (int j = 0; j < m; j++)
    //     {
    //         if (element < arr2[j])
    //             break;
    //         if (element == arr2[j])
    //         {
    //             cout << element << " ";
    //             arr2[j] = INT_MIN;
    //             break;
    //         }
    //     }
    // }
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    cout << endl;
}

int main()
{
    int size1;
    cout << "Enter first array size: ";
    cin >> size1;
    int arr1[10];
    cout << "Enter first array elements: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter the second array size: ";
    cin >> size2;
    int arr2[10];
    cout << "Enter the second array elements: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Intersection of arrays: ";
    findArrayIntersection(arr1, size1, arr2, size2);

    return 0;
}
