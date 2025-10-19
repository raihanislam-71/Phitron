int findWays(vector<int>& arr, int k)
{
	const int MOD = 1000000007;
	int n = arr.size();
	int dp[n+1][k+1];
	dp[0][0] = 1;
	for(int i=1; i<=k; i++)
	{
		dp[0][i] = 0;
	}

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<=k; j++)
		{
			if(arr[i-1] <= j)
			{
				dp[i][j] = (dp[i-1][j-arr[i-1]] + dp[i-1][j]) % MOD; 
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][k];
}
