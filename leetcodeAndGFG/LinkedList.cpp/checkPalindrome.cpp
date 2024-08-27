#include <vector>
class Solution
{
public:
    bool checkPalindrome(vector<int> arr)
    {
        int n = arr.size();

        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            if (arr[start] != arr[end])
                return false;
            else
            {
                start++;
                end--;
            }
            return true;
        }
    }
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node *temp = head;
        vector<int> arr;
        while (temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPalindrome(arr);
    }
};