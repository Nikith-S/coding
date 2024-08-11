

void solve(Node<int> *first, Node<int> *second)
{

    Node *cur1 = first;
    Node *next1 = cur1->next;
    Node *cur2 = second;
    Node *next2 = cur2;

    while (next1 != NULL && cur2 != NULL)
    {
        if ((cur2->data >= cur1->data) && (cur2->data <= next1->data))
        {
            cur1->next = cur2;
            next2 = cur2->next;
            cur2->next = next1;

            cur1 = cur2;
            cur2 = next2;
        }
        else
        {
            cur1 = next1;
            next1 = next1->next;

            if (next1 == NULL)
            {
                cur1->next = cur2;
                return first;
            }
        }
    }
    return first;
}