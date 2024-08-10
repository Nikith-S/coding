#include <iostream>
using namespace std;

// A linked list node
class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a new node with data
    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

// Given the head of a list, reverse the list and return the
// head of reversed list
Node *reverseList(Node *head)
{

    // Initialize three pointers: curr, prev and next
    Node *curr = head, *prev = nullptr, *next;

    // Traverse all the nodes of Linked List
    while (curr != nullptr)
    {

        // Store next
        next = curr->next;

        // Reverse current node's next pointer
        curr->next = prev;

        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }

    // Return the head of reversed linked list
    return prev;
}

// This function prints the contents
// of the linked list starting from the head
void printList(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    // while (node != nullptr)
    // {
    //     cout << " " << node->data;
    //     node = node->next;
    // }
}

// Driver code
int main()
{

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Print the original linked list
    cout << "Given Linked list:";
    printList(head);

    // Function call to return the reversed list
    head = reverseList(head);

    // Print the reversed linked list
    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}