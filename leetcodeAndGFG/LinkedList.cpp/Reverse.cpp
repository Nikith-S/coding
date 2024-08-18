// class Solution {
//   public:
//     // Function to reverse a linked list.
//     struct Node* reverseList(struct Node* head) {
//         // code here
//         // return head of reversed list
//         Node *cur =head;
//         Node *prev= NULL;
//         Node *forward= NULL;
//         while(cur != NULL){
//             forward = cur->next;
//             cur->next = prev;
//             prev=cur;
//             cur= forward;
//         }
//         return prev;

//     }
// };

// for recursion
class Solution
{
private:
    Node *recursion(Node *head, Node *cur, Node *prev)
    {
        if (cur == NULL)
        {                // Correct base case
            return prev; // Return prev when cur is NULL
        }
        Node *forward = cur->next;
        cur->next = prev;
        return recursion(head, forward, cur); // Correct recursion call
    }

public:
    Node *reverseList(Node *head)
    {
        Node *cur = head;
        Node *prev = NULL;
        return recursion(head, cur, prev); // Ensure return value
    }
};