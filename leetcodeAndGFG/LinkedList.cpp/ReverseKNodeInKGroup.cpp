/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head;
        ListNode* forward = NULL;
        ListNode* prev = NULL;
        int count = 0;

        // Check if there are at least k nodes left in the list
        ListNode* check = head;
        for(int i = 0; i < k; i++) {
            if (check == NULL) return head;
            check = check->next;
        }

        while(cur != NULL && count < k){
            forward = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forward;
            count++;
        }

        if(forward != NULL){
            head->next = reverseKGroup(forward, k); // Change head to forward
        }

        return prev;
    }
};
