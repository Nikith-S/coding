class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size();

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            int count = 0;

            // Count the numbers less than or equal to mid
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] <= mid)
                {
                    count++;
                }
            }

            // If count is greater than mid, the duplicate lies in the left half
            if (count > mid)
            {
                right = mid;
            }
            else
            { // Otherwise, it lies in the right half
                left = mid + 1;
            }
        }

        return right;
    }
};
