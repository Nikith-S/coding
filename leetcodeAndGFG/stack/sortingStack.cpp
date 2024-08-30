void sortingStack(stack<int> &s, int num)
{

    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }

    int element = s.top();
    s.pop();

    sortingStack(s, num);

    s.push(element);
}

void SortedStack ::sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    sort(s);

    sortingStack(s, num);
}