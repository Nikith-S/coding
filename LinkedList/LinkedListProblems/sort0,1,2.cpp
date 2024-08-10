void insertAtTail(Node *&tail, Node *cur)
{
    tail->next = cur;
    tail = cur;
}

Node *sort2Approach(Node *head)
{

    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;
    Node *cur = head;

    // Mistake: Incorrect condition in the while loop.
    while (cur != **head**) // should be `NULL`
    {

        int value = cur->data;
        if (value == 0)
        {
            **inseetAtTail**(zeroTail, cur); // Typo: `inseetAtTail` should be `insertAtTail`
        }

        else if (value == 1)
        {
            insertAtTail(oneTail, cur);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, cur);
        }
        cur = cur->next;
    }

    // merge those 3 link lists

    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete (zeroHead);
    delete (oneHead);
    delete (twoHead);

    return head; // Missing return statement for the function
}
