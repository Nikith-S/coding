class Solution
{

private:
    void insertAtBottom(stack<int> &St, int element)
    {
        if (St.empty())
        {
            St.push(element);
            return;
        }
        int num = St.top();
        St.pop();

        insertAtBottom(St, element);

        St.push(num);
    }

public:
    void Reverse(stack<int> &St)
    {
        if (St.empty())
        {
            return;
        }

        int num = St.top();
        St.pop();
        Reverse(St);

        insertAtBottom(St, num);
    }
};