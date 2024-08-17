int countOccurence(int arr[], int n, int k)
{
    // Your code here

    unordered_map<int, int> m;
    int x = n / k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] += 1;
        if (m[arr[i]] > x)
        {
            count++;
            m[arr[i]] = -10000;
        }
    }
    return count;
}