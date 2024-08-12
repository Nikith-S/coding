int minJumps(int arr[], int n)
{
    int maximum = 0;
    int jumps = 0;
    int maximumRange = 0;
    if (n == 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        // update max
        maximum = max(maximum, i + arr[i]);
        // check maxiumRange is equall to i
        if (maximumRange == i)
        {
            maximumRange = maximum;
            jumps++;
            if (maximumRange >= n - 1)
            {
                return jumps;
            }
        }
    }
    return -1;
}