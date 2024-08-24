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

void insertEelement(Node *&tail, int element, int data)
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
    }

    prev->next = cur->next;
    cur->next = NULL;
    delete (cur);
}

void printNode(Node *tail)
{

    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail->next != temp);
}

int main()
{
    Node *tail = new Node(10);
    insertEelement(tail, 10, 30);
}
