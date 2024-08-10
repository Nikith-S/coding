#include <iostream>
#include <algorithm> // for sort function
using namespace std;

void tripletSum(int arr[], int n, int sum)
{
    sort(arr, arr + n); // Sort the array

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int curSum = arr[i] + arr[left] + arr[right];
            if (curSum == sum)
            {
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;
                left++;
                right--;
            }
            else if (curSum < sum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter the desired sum: ";
    cin >> sum;

    cout << "The triplets with the sum " << sum << " are: " << endl;
    tripletSum(arr, size, sum);

    return 0;
}

