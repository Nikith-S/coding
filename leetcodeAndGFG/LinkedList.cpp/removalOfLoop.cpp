class Solution
{
private:
    Node *floydDetection(Node *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        Node *fast = head;
        Node *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            // Check for cycle
            if (slow == fast)
            {
                return slow; // Correct placement of return
            }
        }
        return NULL; // Return NULL if no cycle is detected
    }

public:
    // Function to find the first node if the linked list has a loop.
    Node *findFirstNode(Node *head)
    {
        Node *intersection = floydDetection(head);
        if (intersection == NULL)
        {
            return NULL; // If no intersection, return NULL
        }
        Node *slow = head;
        while (slow != intersection)
        {
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow; // Return the node itself
    }

    // Function to remove a loop in the linked list.
    void removeLoop(Node *head)
    {
        if (head == NULL)
        {
            return;
        }
        Node *startOfLoop = findFirstNode(head);
        if (startOfLoop == NULL)
            return; // Handle the case when there is no loop
        Node *temp = startOfLoop;
        while (temp->next != startOfLoop)
        { // Traverse to the node just before the start of the loop
            temp = temp->next;
        }
        temp->next = NULL; // Correct the typo from temp-next to temp->next
    }
};