class Solution
{
public:
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1; // Last valid element in nums1
    int j = n - 1; // Last element in nums2
    int k = m + n - 1; // Last index in nums1

    // Merge from the back to avoid using extra space
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }

    // If any elements are left in nums2, copy them
    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // nums1 has extra space for nums2
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    for (int num : nums1)
    {
        cout << num << " ";
    }
    return 0;
}

};