#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memeory free
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertAtHead(Node *&head, int data)
{
    // new node creation
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insetAtGivenPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cur = 1;
    while (cur < position - 1)
    {
        temp = temp->next;
        cur++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int count = 1;
        Node *cur = head;
        Node *prev = NULL;
        while (count < position)
        {
            prev = cur;
            cur = cur->next;
            count++;
        }
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtTail(tail, 13);
    print(head);
    insertAtTail(tail, 13);
    print(head);
    insetAtGivenPosition(head, tail, 2, 9);
    print(head);
    insetAtGivenPosition(head, tail, 1, 3);
    print(head);
    insetAtGivenPosition(head, tail, 2, 399);
    print(head);
    // deleteNode(2, head);
    // print(head);

    cout << endl;
    cout << "Head" << head->data << endl;
    cout << "tail" << tail->data << endl;
}