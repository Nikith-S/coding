#include <iostream>
using namespace std;
int main()
{
    // int sum = 0;
    // int i = 0;
    // int n;
    // cin >> n;
    // for(i=0 ; i <=10 ; i++){
    //     sum+=i;
    // }
    // cout<< sum;

    // while (i <= 10)
    // {

    //     sum += i;
    //     i++;
    // }
    // cout << sum;

    // while (i < n)
    // {
    //     cout << i;
    //     i++;
    // }
    // cout << n;

    int n = 10;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i;
        }
        i++;
    }
}