#include <bits/stdc++.h>
using namespace std;

bool canReach(long long n, long long t, vector<int> &dp)
{
    if (n == t)
        return true;
    if (n > t)
        return false;
    if (dp[n] != -1)
        return dp[n];

    bool result = false;

    if (n + 3 <= t)
        result = result || canReach(n + 3, t, dp);

    if (n * 2 <= t)
        result = result || canReach(n * 2, t, dp);

    return dp[n] = result;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long t;
        cin >> t;

        vector<int> dp(t + 5, -1);

        if (canReach(1, t, dp))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
