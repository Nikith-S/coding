bool subArrayExists(int arr[], int n)
{
    unordered_map<int, bool> hash;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (hash[sum] || sum == 0)
            return true;
        hash[sum] = 1;
    }
    return false;
}