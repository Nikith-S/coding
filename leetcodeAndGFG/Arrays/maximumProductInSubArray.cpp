long long maxProduct(vector<int> arr, int n)
{
    // Function to find maximum product subarray
    long long maximum = LLONG_MIN; // Use long long to avoid overflow issues
    long long preffix = 1;
    long long suffix = 1;

    for (int i = 0; i < n; i++)
    {
        preffix *= arr[i];
        suffix *= arr[n - i - 1];

        maximum = max(maximum, max(preffix, suffix));

        // If prefix or suffix becomes 0, reset it to 1 to continue checking
        if (preffix == 0)
            preffix = 1;
        if (suffix == 0)
            suffix = 1;
    }

    return maximum;
}