#include <iostream>
using namespace std;

void reachHome(int src, int destination)
{

    if (src == destination)
    {
        cout << "reached" << endl;
        return;
    }
    cout << src << " " << endl;

    reachHome(src + 1, destination);
}

int main()
{
    int src = 1;
    int destination = 10;

    reachHome(src, destination);
}