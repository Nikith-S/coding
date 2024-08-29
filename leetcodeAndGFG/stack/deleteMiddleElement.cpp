class Solution
{
private:
    void deleteMidElement(stack<int> &s, int count, int size)
    {
        // Base case: If count is equal to half the size, we've reached the middle
        if (count == size / 2)
        {
            s.pop(); // Remove the middle element
            return;
        }

        int num = s.top(); // Corrected: s.top() to get the top element
        s.pop();           // Remove the top element

        // Recursive call to go deeper into the stack
        deleteMidElement(s, count + 1, size);

        // Push the element back after the middle element is removed
        s.push(num);
    }

public:
    // Function to delete the middle element of a stack
    void deleteMid(stack<int> &s, int sizeOfStack)
    {
        int count = 0; // Start from the first element
        deleteMidElement(s, count, sizeOfStack);
    }
};