#include <iostream>
using namespace std;

bool hasUniqueElement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }


    for (int i = 0; i < n; i++)
    {
        if ((ans ^ arr[i]) == 0)
        {
            return true;
        }
    }
    return false;
}



// function hasUniqueElement(arr) {
//     let ans = 0;

//     // Compute XOR of all elements
//     for (let num of arr) {
//         ans ^= num;
//     }

//     // Check if ans is in the array
//     for (let num of arr) {
//         if ((ans ^ num) === 0) {
//             return true;
//         }
//     }

//     return false;
// }

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (hasUniqueElement(arr, size))
    {
        cout << "There is at least one unique element in the array." << endl;
    }
    else
    {
        cout << "There are no unique elements in the array." << endl;
    }

    return 0;
}
