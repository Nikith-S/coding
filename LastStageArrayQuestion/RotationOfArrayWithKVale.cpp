#include <iostream>
using namespace std;
#include <vector>

void rotateArray(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[((i + k) % nums.size())] = nums[i];
    }
    nums = temp;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 1;
    rotateArray(nums, k);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}


// reverse(arr,0,n-k-1);
// reverse(arr,n-k,n-1);
// reverse(arr,0,n-1)