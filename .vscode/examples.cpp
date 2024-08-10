#include <iostream>
using namespace std;
int main()
{

    // fibonacci series;
    int n;
    cout << "enter the n";
    cin >> n;
    int n1 = 0;
    int n2 = 1;
    cout << n1 << " " << n2 << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = n1 + n2;

        cout << nextNumber << " ";

        n1 = n2;
        n2 = nextNumber;
    }
    // bool isprime = 1;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         // cout << "not a prime number " << endl;
    //         isprime = 0;
    //         break;
    //     }
    // }

    // if (isprime == 0)
    // {
    //     cout << " It is not  prime number ";
    // }
    // else
    // {
    //     cout << " it is prime number ";
    // }
}