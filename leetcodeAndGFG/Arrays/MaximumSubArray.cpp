 long long maxSubarraySum(std::vector<int> &arr) {
         long long sum = 0;
        long long maxSum = LLONG_MIN; // Use LLONG_MIN for long long type minimum value

        for (int i = 0; i < arr.size(); i++) {
            // if(sum == 0);
            // int start = i;
                // then int ansStart = start ; int ansEnd = i; 
            sum += arr[i];
            
            // Update maxSum if the current sum is greater
            if (sum > maxSum) {
                maxSum = sum;
            }
            
            // If the sum becomes negative, reset it to zero
            if (sum < 0) {
                sum = 0;
            }
        }

        return maxSum;
    }