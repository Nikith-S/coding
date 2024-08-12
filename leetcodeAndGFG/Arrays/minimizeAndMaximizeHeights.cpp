int getMinDiff(int arr[], int n, int k)
{
    // Sort the array
    std::sort(arr, arr + n);

    // Initialize result
    int ans = arr[n - 1] - arr[0];

    // Handle corner elements
    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;

    // Traverse the array and find the minimum difference
    for (int i = 0; i < n - 1; i++)
    {
        int mini = std::min(smallest, arr[i + 1] - k);
        int maxi = std::max(largest, arr[i] + k);
        if (mini < 0)
            continue;
        ans = std::min(ans, maxi - mini);
    }
    return ans;
}