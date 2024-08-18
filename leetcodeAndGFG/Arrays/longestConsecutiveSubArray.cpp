int findLongestConseqSubseq(int arr[], int N)
{
    sort(arr, arr + N);
    int last_integer = INT_MIN;
    int count = 0;
    int longest = 1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] - 1 == last_integer)
        {
            count++;
            last_integer = arr[i];
        }
        else if (last_integer != arr[i])
        {
            count = 1;
            last_integer = arr[i];
        }

        longest = max(longest, count);
    }
    return longest;

    // optimal solution
    // int n = a.size();
    // if(n==0) return 0;
    // int longest = 1;
    // unordered_set<int>st;
    // for(int i = 0 ; i < n ; i++){
    //     st.insert(a[i]);
    // }
    // for(auto it : st){
    //     if(st.find(it-1) == st.end()){
    //         int cnt = 1;
    //         int x = it;
    //         while(st.find(x+1) != st.end()){
    //             x = x +1;
    //             cnt = cnt +1;
    //         }
    //         longest = max(longest, cnt);
    //     }
    // }
    // return longest;
}