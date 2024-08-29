class twoStacks
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    twoStacks(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Function to push an integer into stack1.
    void push1(int x)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = x;
        }
    }

    // Function to push an integer into stack2.
    void push2(int x)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = x;
        }
    }

    // Function to remove an element from the top of stack1.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        return -1;
    }

    // Function to remove an element from the top of stack2.
    int pop2()
    {
        if (top2 < size)
        { // Corrected the condition here
            int ans = arr[top2];
            top2++;
            return ans;
        }
        return -1;
    }
};