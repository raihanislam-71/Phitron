#include <bits/stdc++.h>
#define ll long long int // macro
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    ll adj[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = LLONG_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }

    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c);
    }

    // floyd warshall
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] != LLONG_MAX && adj[k][j] != LLONG_MAX)
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (adj[x][y] < LLONG_MAX)
            cout << adj[x][y] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
