#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[100];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to be found" << endl;
    cin >> key;

    bool found = linearSearch(arr, size, key);
    if (found)
    {
        cout << "The element is found" << " " << key << endl;
    }

    else
    {
        cout << "The element is not found" << endl;
    }
}
