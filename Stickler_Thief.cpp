//  int solve(int nums[], int n, int index,  vector<int> &dp){
//         if(index >= n) return 0;
        
//         if(dp[index] != -1) return dp[index];
        
//         int op1 = nums[index] + solve(nums, n, index+2, dp);
//         int op2 = 0 + solve(nums, n, index+1, dp);
//         dp[index] = max(op1, op2);
//         return dp[index];
//     }

    int solveTabu(int nums[], int n){
        vector<int> dp(n+1, -1);
        
        dp[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            int op1 = nums[i] + dp[i+2];
            int op2 = 0 + dp[i+1];
            dp[i] = max(op1, op2);
        }
        return dp[0];
    }
    
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        // vector<int> dp(n+1, -1);
        // int ans = solve(arr, n, 0, dp);
        int ans = solveTabu(arr, n);
        return ans;
    }