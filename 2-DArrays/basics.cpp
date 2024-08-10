

#include <iostream>
#include <climits>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// to print col wise sum
void printSum1(int arr[][4], int row, int col)
{
    cout << "Printing Sum for col wise" << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 4; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

// to print row wise sum
void printSum(int arr[][4], int row, int col)
{
    cout << "Printing Sum for row wise" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

void largestSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "the maximum sum is " << maxi << endl;
    cout << "the index is " << rowIndex;
}

int main()
{
    int arr[3][4];
    // int arr[3][4] = {{1, 11, 111, 1111},
    //                  {2, 22, 222, 2222},
    //                  {3, 33, 333, 3333}};
    // input in the form of row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // Input in the form of column-wise
    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // Output the array in row-wise order
    cout << "the elements are" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search" << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    printSum(arr, 3, 4);
    printSum1(arr, 3, 4);
    cout << endl;

    largestSum(arr, 3, 4);

    return 0;
}
