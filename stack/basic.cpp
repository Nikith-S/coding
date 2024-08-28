#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {

        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {

        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
            return;
        }
    }

    void peekTop()
    {
        if (top >= 0)
        {
            cout << arr[top];
        }

        else
        {
            cout << "There are no element in the stack";
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return false;
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.peekTop();
}