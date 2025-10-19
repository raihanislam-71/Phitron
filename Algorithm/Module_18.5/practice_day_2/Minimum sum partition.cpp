class Solution {

  public:
    int minDifference(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        int s =accumulate(arr.begin(), arr.end(), 0);
        bool dp[n+1][s+1];
        dp[0][0] = true;
        for(int i=1; i<=s; i++)
        {
            dp[0][i] = false;
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=s; j++)
            {
                if(arr[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }


        // int ans = INT_MAX;
        // // শুধু dp[n][j] check করলেই হবে (শেষ row)
        // for(int j = 0; j <= s/2; j++) {  // শুধু s/2 পর্যন্ত check করলেই হবে
        //     if(dp[n][j]) {
        //         int s1 = j;
        //         int s2 = s - s1;
        //         ans = min(ans, abs(s1 - s2));
        //     }
        // }
        // return ans;

        //OR
        vector<int> v;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=s; j++)
            {
                if(dp[i][j] == 1) v.push_back(j);
            }
        }
        
        int ans = INT_MAX;
        for(int val : v)
        {
            int s1 = val;
            int s2 = s - s1;
            ans = min(ans , abs(s1 - s2));
        }
        return ans;
    }
};
