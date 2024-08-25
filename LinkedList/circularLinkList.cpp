#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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

void insertElement(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        Node *cur = tail;

        while (cur->data != element)
        {
            cur = cur->next;
            if (cur == tail)
                return; // Prevent infinite loop if element not found
        }

        Node *newNode = new Node(data);
        newNode->next = cur->next;
        cur->next = newNode;
    }
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        return;
    }

    Node *prev = tail;
    Node *cur = prev->next;

    while (cur->data != element)
    {
        prev = cur;
        cur = cur->next;
        if (cur == tail)
            return; // Prevent infinite loop if element not found
    }

    prev->next = cur->next;

    if (cur == tail)
    {
        if (cur->next == cur)
        {
            tail = NULL;
        }
        else
        {
            tail = prev;
        }
    }

    cur->next = NULL;
    delete cur;
}

void printNode(Node *tail)
{
    if (tail == NULL)
    {
        return;
    }

    Node *temp = tail;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

int main()
{
    Node *tail = new Node(10);
    insertElement(tail, 10, 30);
    printNode(tail);
}
