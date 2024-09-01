#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; ++i)
        {
            // Start with a row of 1s
            vector<int> row(i + 1, 1);

            // Update the elements of the row (except the first and last)
            for (int j = 1; j < i; ++j)
            {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            // Add the row to the triangle
            triangle.push_back(row);
        }

        return triangle;
    }
};
