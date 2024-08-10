#include <iostream>
using namespace std;

void printingWave(int arr[][4], int rowNum, int colNum)
{
    for (int col = 0; col < colNum; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < rowNum; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = rowNum - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int rowNum = 3;
    int colNum = 4;

    printingWave(arr, rowNum, colNum);

    return 0;
}
