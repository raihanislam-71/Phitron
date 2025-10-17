class Solution {
public:
    int dp[105];
    int knapsack(vector<int>& nums, int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];

        if(dp[n] != -1) return dp[n];
        int op1 = knapsack(nums , n-2) + nums[n-1];
        int op2 = knapsack(nums , n-1);
        dp[n] = max(op1 , op2);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return knapsack(nums,nums.size());
    }
};