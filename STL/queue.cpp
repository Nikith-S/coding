#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<string> q;

    q.push("nikit");
    q.push("niki");
    cout << "the elements are " << q.front();
    q.pop();
    cout << "the elements are " << q.front();
    cout << "size after pop" << q.size();
}