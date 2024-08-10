#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n " << endl;
    cin >> n;

    //   1. question

    // int product = 1;
    // int sum = 0;

    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     product *= digit;
    //     sum += digit;

    //     n = n / 10;
    // }
    // int final = product - sum;
    // cout << final;

    // 2. question
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;

    /*
     3. reverse Integer
       int ans = 0;
       while (n != 0)
       {
           int digit = n % 10;
           if (ans > INT_MAx/10 ||  ans < INT_MIN/10)
           {
           return 0;
           }
           ans = (ans * 10) + digit;
           n = n / 10;
       }
       cout << ans;
       */
}