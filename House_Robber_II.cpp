class Solution {
public:

    int houses(vector<int>& nums){
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;

        for(int i=1; i<n; i++){
            int take = nums[i];

            if(i > 1)
                take += prev2;
            
            int notTake = prev;
            int curr = max(take, notTake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];

        vector<int>v1(nums.begin(), nums.end()-1);
        vector<int>v2(nums.begin()+1, nums.end());

        return max(houses(v1), houses(v2));
    }
};