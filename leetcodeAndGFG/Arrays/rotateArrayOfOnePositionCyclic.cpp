// //    void rotate(vector<int> &arr) {
// //                 // code here
// //        int n=arr.size();
// //        for(int i=0;i<n;i++){
// //            swap(arr[i],arr[n-1]);
// //     }
// //     }

// #include <iostream>
// #include <vector>
// #include <algorithm> // For reverse

// using namespace std;

// void reverse(vector<int> &arr, int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void leftRotateByK(vector<int> &arr, int k) {
//     int n = arr.size();
//     k = k % n; // Handle cases where k > n

//     // Step 1: Reverse first k elements
//     reverse(arr, 0, k - 1);

//     // Step 2: Reverse remaining elements
//     reverse(arr, k, n - 1);

//     // Step 3: Reverse the entire array
//     reverse(arr, 0, n - 1);
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 3;

//     leftRotateByK(arr, k);

//     for (int num : arr) {
//         cout << num << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

void leftRotateByK(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n; // Handle cases where k > n

    for (int r = 0; r < k; r++)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }
}

// void rightRotateByK(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     k = k % n; // Handle cases where k > n

//     for (int r = 0; r < k; r++)
//     {
//         int temp = arr[n - 1];
//         for (int i = n - 1; i > 0; i--)
//         {
//             arr[i] = arr[i - 1];
//         }
//         arr[0] = temp;
//     }
// }

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;

    cout << "Left Rotation by " << k << ": ";
    leftRotateByK(arr, k);
    for (int num : arr)
    {
        cout << num << " ";
    }

    cout << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5};
    cout << "Right Rotation by " << k << ": ";
    // rightRotateByK(arr2, k);
    for (int num : arr2)
    {
        cout << num << " ";
    }

    return 0;
}
