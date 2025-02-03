class Solution
{
private:
    vector<int> generateRows(int rows)
    {
        long long ans = 1; // Use long long to handle large numbers
        vector<int> ansRow;
        ansRow.push_back(1); // First element is always 1
        for (int col = 1; col < rows; col++)
        {                             // Generate the row
            ans = ans * (rows - col); // Compute the binomial coefficient
            ans = ans / col;
            ansRow.push_back(ans); // Add the value to the row
        }
        return ansRow;
    }

public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++)
        { // Generate rows from 1 to numRows
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};
