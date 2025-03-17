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

    while (cur != NULL)
    {
        int value = cur->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, cur);
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

    // Merge three sorted linked lists
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

    // Update head to new sorted list
    head = zeroHead->next;

    // Delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}