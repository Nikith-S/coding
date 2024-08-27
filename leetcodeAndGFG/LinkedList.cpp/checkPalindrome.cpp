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


// method 2 
class Solution{
    
    private:
    Node *getMid(Node *head){
    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow -> next;
    }

    return slow;
    }
    
    Node *reverse(Node *head){
        Node *cur = head;
        Node *prev = NULL;
        Node *forward=NULL;
        
        while(cur != NULL){
            forward = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forward;
        }
        
        return prev;
    }
    
public:
    
  bool isPalindrome(Node *head){
      
      if(head -> next == NULL)
      return true;
    //   find Middle
      Node * middle = getMid(head);
      
    //   Reverse from Middle Element
      Node *temp = middle->next;
      middle->next = reverse(temp);
      
    //   comparing the elements
      Node *head1 = head;
      Node *head2 = middle->next;
      
      while(head2 != NULL){
          if(head2->data != head1->data){
              return false;
          }
          head1= head1->next;
          head2 = head2->next;
      }
      
        temp = middle->next; 
      middle->next = reverse(temp);
      
      return true;
     
  }  
    
};