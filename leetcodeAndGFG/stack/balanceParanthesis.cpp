class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;

        for (int i = 0; i < x.size(); i++)
        {
            char ch = x[i];

            // If the character is an opening bracket, push it onto the stack
            if (ch == '(' || ch == '{' || ch == '[')
            {
                s.push(ch);
            }
            else
            {
                // If the stack is empty and a closing bracket is found, return false
                if (s.empty())
                {
                    return false;
                }

                char top = s.top();

                // Check if the top of the stack matches the current closing bracket
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    s.pop(); // If it matches, pop the top element from the stack
                }
                else
                {
                    return false; // If it doesn't match, the string is not balanced
                }
            }
        }

        // If the stack is empty, all brackets were balanced
        return s.empty();
    }
};