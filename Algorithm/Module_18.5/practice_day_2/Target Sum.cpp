class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);

        if((target + sum)%2 != 0)
        {
            return 0;
        }

        int s = (target + sum) / 2;

        if(s < 0 || s > sum)
        {
            return 0;
        }

        int dp[n+1][s+1];
        dp[0][0] = 1;
        for(int i=1; i<=s; i++)
        {
            dp[0][i] = 0;
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=s; j++)
            {
                if(nums[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][s];
    }
};