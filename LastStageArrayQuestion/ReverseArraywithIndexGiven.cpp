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

// function rotateArrayWithM(arr, m) {
//     let start = m + 1;
//     let end = arr.length - 1;

//     while (start <= end) {
//         [arr[start], arr[end]] = [arr[end], arr[start]]; // Swap elements
//         start++;
//         end--;
//     }
// }

// // Example usage:
// let arr = [1, 2, 3, 4, 5, 6, 7, 8];
// let m = 3;

// rotateArrayWithM(arr, m);
// console.log(arr); // Output: [1, 2, 3, 4, 8, 7, 6, 5]
