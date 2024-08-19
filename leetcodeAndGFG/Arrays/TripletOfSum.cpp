bool find3Numbers(int a[], int n, int x)
{
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            sum = a[i] + a[l] + a[r];
            if (sum == x)
            {

                return true;
            }
            else if (sum > x)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return false;
}