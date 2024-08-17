class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;
        int totalEle = row * col;
        int count = 0;

        while (count < totalEle)
        {
            // Print starting row
            for (int index = startingCol; index <= endingCol && count < totalEle; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            // Print ending column
            for (int index = startingRow; index <= endingRow && count < totalEle; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // Print ending row
            for (int index = endingCol; index >= startingCol && count < totalEle; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // Print starting column
            for (int index = endingRow; index >= startingRow && count < totalEle; index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};
