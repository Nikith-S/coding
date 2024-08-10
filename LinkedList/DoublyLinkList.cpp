#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLenght(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }

    Node *temp = new Node(data);
    temp->next = head;
    // head->prev = temp->next;
    head->prev = temp;

    head = temp;
}

void insertAtTail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    // temp->prev = tail->next;
    temp->prev = tail;

    tail = temp;
}

void insetAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int count = 1;
    Node *temp = head;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        if (temp->next != NULL)
        { // Check if the list has more than one node
            temp->next->prev = NULL;
        }
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return; // Return early to avoid executing the rest of the function
    }

    int count = 1;
    Node *cur = head;
    Node *prev = NULL;

    while (count < position)
    { // Loop until you reach the node to delete
        prev = cur;
        cur = cur->next;
        count++;
    }

    if (cur->next != NULL)
    { // If it's not the last node
        cur->next->prev = prev;
    }
    prev->next = cur->next;

    // Clean up the node
    cur->prev = NULL;
    cur->next = NULL;
    delete cur;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << "length of the list is :" << getLenght(head) << endl;
    insertAtHead(head, tail, 12);
    print(head);
    insertAtHead(head, tail, 13);
    print(head);
    insertAtTail(tail, head, 1);
    print(head);
    insertAtTail(tail, head, 1);
    print(head);
    insertAtTail(tail, head, 39);
    print(head);
    insetAtPosition(head, tail, 99, 2);
    print(head);
    insetAtPosition(head, tail, 99, 8);
    print(head);
    insetAtPosition(head, tail, 1, 8);
    print(head);
    deleteNode(9, head);
    print(head);
    // deleteNode(4, head);
    // print(head);

    cout << endl;
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
}