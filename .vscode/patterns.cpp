#include <iostream>
using namespace std;
int main()
{
    /* pattern 1


    int row;
    cin >> row;

    int i = 1;

    while (i <= row)
    {
        int column = 1;
        while (column <= row)
        {
            cout << i;
            column = column + 1;
        }
        cout << endl;
        i++;
    }
    */

    /*
        int row;
        cout << "Enter no of rows";
        cin >> row;
        int i = 1;
        while (i <= row)
        {
            int j = 1;
            while (j <= row)
            {
                cout << j;  // for reverse the numbers do n-j+1
                j++;
            }
            cout << endl;
            i++;
        }
        */

    /*
       int row;
       int i = 1;
       int count = 1;
       cout << "enter";
       cin >> row;


       while (i <= row)
       {
           int j = 1;
           while (j <= row)

           {

               cout << count << " ";
               count++;
               j++;
           }
           cout << endl;
           i++;
       }
       }
       */

    /*
        int n;
        cout << "Enter n ";
        cin >> n;
        int row = 1;
        while (row <= n)
        {
            int coloumn = 1;
            while (coloumn <= row)
            {
                cout << " *";
                coloumn++;
            }
            cout << endl;
            row++;
        }
 *
 * *
 * * *
 * * * *
*/

    /*
        int row = 1;
        int n;
        cout << "enter n";
        cin >> n;
        while (row <= n)
        {
            int coloumn = 1;
            while (coloumn <= row)
            {
                cout << row;
                coloumn++;
            }
            cout << endl;
            row++;
        }

    1
    22
    333
    4444

        */

    /*
        int n;
        int row = 1;
        cin >> n;
        while (row <= n)
        {
            int coloumn = row;
            while (coloumn <= n)
            {
                cout << " * ";
                coloumn++;
            }
            cout << endl;
            row++;
        }



     *  *  *  *
     *  *  *
     *  *
     *

     */

    /*
        int n;
        int row = 1;
        cin >> n;
        while (row <= n)
        {
            int coloumn = 1;
            int vlaue = row;
            while (coloumn <= row)
            {
                cout << vlaue;
                vlaue++;
                coloumn++;
            }
            cout << endl;
            row++;
        }
    1
    23
    345

     */

    /*
        int n;
        int row = 1;
        cin >> n;

        while (row <= n)
        {
            int coloumn = 1;
            while (coloumn <= row)
            {
                cout << row - coloumn + 1;
                coloumn++;
            }
            cout << endl;
            row++;
        }

    1
    21
    321
    4321

    */

    int n;
    int row = 1;
    cin >> n;

    while (row <= n)
    {
        int coloumn = 1;

        while (coloumn <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            coloumn++;
        }
        cout << endl;
        row++;
    }
}
