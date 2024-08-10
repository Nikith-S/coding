#include <iostream>
using namespace std;

bool sortedArrayOrNot(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaingpart = sortedArrayOrNot(arr + 1, n - 1);
        return remaingpart;
    }
}

int main()
{

    int arr[10];
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n;

    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int arr[5] = {2, 3, 4, 5, 1};
    // int n = 5;
    cout << endl;
    bool ans = sortedArrayOrNot(arr, n);
    if (ans)
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }
}