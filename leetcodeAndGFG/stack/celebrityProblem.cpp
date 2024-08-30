class Solution
{
private:
    bool knows(vector<vector<int>> &mat, int a, int b)
    {
        return mat[a][b] == 1;
    }

public:
    int celebrity(vector<vector<int>> &mat)
    {
        int n = mat.size();
        stack<int> s;

        // Push all persons into the stack
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        // Determine potential celebrity
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (knows(mat, a, b))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }

        int ans = s.top();

        // Validate the potential celebrity
        bool rowCheck = true;
        for (int i = 0; i < n; i++)
        {
            if (mat[ans][i] != 0)
            { // Celebrity row should have all zeros
                rowCheck = false;
                break;
            }
        }

        bool colCheck = true;
        for (int i = 0; i < n; i++)
        {
            if (i != ans && mat[i][ans] != 1)
            { // Celebrity column should have n-1 ones
                colCheck = false;
                break;
            }
        }

        if (rowCheck && colCheck)
        {
            return ans; // Return the index of the celebrity
        }
        else
        {
            return -1; // No celebrity found
        }
    }
};