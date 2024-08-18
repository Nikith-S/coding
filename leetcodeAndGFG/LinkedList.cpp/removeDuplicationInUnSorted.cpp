// class Solution
// {
//     public:
//     //Function to remove duplicates from unsorted linked list.
// Node* removeDuplicates(Node* head)
// {

// if (head == NULL)
// return NULL;

// Node * cur = head;
// while(cur != NULL){
//     Node *temp = cur->next;
//     Node *prev = cur;
//     while(temp !=  NULL){
//         if(temp ->data == cur->data){
//             prev->next = temp->next;
//             delete(temp);
//             temp = prev->next;
//         }
//         else{
//             prev = temp;
//             temp = temp->next;
//         }
//     }
//     cur = cur->next;
// }
// return head;
// }

// };

class Solution
{
public:
    Node *removeDuplicates(Node *head)
    {
        if (head == NULL)
            return NULL;

        std::unordered_set<int> seen; // Use a hash set to store seen values
        Node *cur = head;
        Node *prev = NULL;

        while (cur != NULL)
        {
            if (seen.find(cur->data) != seen.end())
            {
                // If current value is already seen, delete the node
                prev->next = cur->next;
                delete cur;
            }
            else
            {
                // If current value is not seen, add it to the set
                seen.insert(cur->data);
                prev = cur;
            }
            cur = prev->next;
        }

        return head;
    }
};