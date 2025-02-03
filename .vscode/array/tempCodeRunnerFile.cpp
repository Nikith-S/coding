int twoSum(int arr[], int n, int sum)
// {
//     int left = 0;
//     int right = n - 1;
//     int ans = 0;

//     while (left < right)
//     {
//         int k = arr[left] + arr[right];

//         if (k == sum)
//         {
//             cout << arr[left] << ", " << arr[right] << endl;
//             ans++; // Increment the count of pairs found
//             left++;
//             right--;
//         }
//         else if (k > sum)
//         {
//             right--;
//         }
//         else
//         {
//             left++;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int arr[4] = {1, 5, 7, 1};
//     sort(arr, arr + 4);
//     int TwoSum = twoSum(arr, 4, 6);
//     cout << "Number of pairs: " << TwoSum << endl;
// }