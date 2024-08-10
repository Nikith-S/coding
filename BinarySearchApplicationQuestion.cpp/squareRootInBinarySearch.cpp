#include <iostream>
using namespace std;

// long long int binarySearch(int n)
// {
//     int start = 0;
//     int end = n;
//     int mid = start + (end - start) / 2;
//     int ans = 0;

//     while (start <= end)
//     {
//         long long int square = mid * mid;
//         if (square == n)
//         {
//             return mid;
//         }
//         if (square > n)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int mySqrt(int n)
// {
//     return binarySearch(n);
// }

long long int Square(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precission, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precission; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int tempSol = Square(n);

    cout << "the answer is " << morePrecision(n, 3, tempSol);

    return 0;
}
