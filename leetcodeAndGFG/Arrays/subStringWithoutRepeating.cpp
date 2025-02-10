int lengthOfLongestSubstring(string s)
{
    int hash[255] = {-1};
    int maxLen = 0;
    int n = s.length();
    int l, r = 0;
    if (s.length() == 0)
        return 0;
    for (int i = 0; i < n; i++)
    {
        if (hash[s[r]] != -1)
        {
            if (hash[s[r]] >= l)
            {
                l = hash[s[r]] + 1;
            }
        }
        int len = r - l + 1;
        maxLen = max(maxLen, len);
        hash[s[r]] = r;
        r++;
    }
    return maxLen;
}
}
;