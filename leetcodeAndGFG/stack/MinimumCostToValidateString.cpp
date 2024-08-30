#include <stack>
#include <string>
using namespace std;

int validateString(string &s)
{
    // Check if the length of the string is odd, which would mean it can't be balanced
    if (s.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> st; // Renamed stack variable to 'st' to avoid shadowing

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    // Now calculate the number of swaps required to balance the parentheses
    int a = 0; // Count of unmatched ')'
    int b = 0; // Count of unmatched '('

    while (!st.empty())
    {
        if (st.top() == '(')
        {
            b++;
        }
        else
        {
            a++;
        }
        st.pop(); // Pop the top element
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
