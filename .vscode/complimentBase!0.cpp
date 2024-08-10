#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n;
    int ans = 0;
    cout << "Enter a number: ";
    cin >> n;

    // int m = n; // Use m to determine the bit-length
    // int mask = 0;

    // if (n == 0)
    // {
    //     return 1;
    // }

    // while (m != 0)
    // {
    //     mask = (mask << 1) | 1;
    //     m = m >> 1;
    // }

    // int ans = (~n) & mask;
    // cout << "The bitwise complement within the bit-length of the number is: " << ans << endl;

    // return 0;

    bool isPowerOf2 = false;
    for (int i = 0; i <= 30; i++)
    {
        if (pow(2, i) == n)
        {
            isPowerOf2 = true;
            break;
        }
    }

    if (isPowerOf2)
    {
        cout << "It lies in the power of 2";
    }
    else
    {
        cout << "It does not lie in the power of 2";
    }

    return 0;
}
