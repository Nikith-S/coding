class Solution
{

private:
    Node *merge(Node *list1, Node *list2)
    {
        Node *dummyNode = new Node(-1);
        Node *res = dummyNode;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->data < list2->data)
            {
                res->bottom = list1;
                res = list1;
                list1 = list1->bottom; // Use bottom instead of next
            }
            else
            {
                res->bottom = list2;
                res = list2;
                list2 = list2->bottom; // Use bottom instead of next
            }
        }

        if (list1)
            res->bottom = list1;
        else
            res->bottom = list2;

        return dummyNode->bottom;
    }

public:
    // Function which returns the root of the flattened linked list.
    Node *flatten(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        // Flatten the rest of the list
        Node *mergeHead = flatten(head->next);

        // Merge the current list with the flattened list
        head = merge(head, mergeHead);

        return head;
    }
};
