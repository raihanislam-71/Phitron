#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, d;
    cin >> n >> d;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if ((d + sum) % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    ll s = (d + sum) / 2;

    if (s < 0 || s > sum)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    bool dp[n + 1][s + 1];
    dp[0][0] = true;

    for (ll i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    if (dp[n][s])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
