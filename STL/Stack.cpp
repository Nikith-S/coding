#include <iostream>
using namespace std;
#include <stack>

int main()
{
    stack<string> s;

    s.push("nikith");
    s.push("niki");
    cout << "the top element is " << s.top();
    s.pop();
    cout << "the top element is " << s.top();

    cout << "size of stack" << s.size();
}