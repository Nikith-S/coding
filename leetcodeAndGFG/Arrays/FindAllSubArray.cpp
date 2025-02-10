#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findAllSubArrayWithGivenSum(vector<int> &arr, int k)
{
    unordered_map<int, int> mpp; // Using unordered_map for O(1) lookup
    mpp[0] = 1;                  // Initialize with sum 0 occurring once

    int preSum = 0, count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        preSum += arr[i];        // Compute prefix sum
        int remove = preSum - k; // Target prefix sum to remove
        count += mpp[remove];    // If found, add its occurrences to count
        mpp[preSum]++;           // Store the current prefix sum
    }

    return count;
}

// Example Usage
int main()
{
    vector<int> arr = {1, 0, 1, 0, 1};
    int k = 2;
    cout << "Count of subarrays with sum " << k << " is: " << findAllSubArrayWithGivenSum(arr, k) << endl;
    return 0;
}
