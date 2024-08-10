#include <iostream>
using namespace std;
#include <climits>

int getMax(int num[], int n)
{
    // int max = INT_MIN;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter the array size";
    cin >> size;

    int num[100];
    cout << "Enter the array elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;

    cout << "Maximum value is " << getMin(num, size) << endl;
    return 0;
}