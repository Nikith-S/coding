#include <iostream>
using namespace std;
bool check(int arr[])
{
    int count = 0;
    int n = sizeof(arr);
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{

    int arr[] = {3, 4, 5, 1, 2};
    bool(arr);
}