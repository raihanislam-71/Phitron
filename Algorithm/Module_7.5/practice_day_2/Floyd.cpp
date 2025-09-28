#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int adj[n][n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
            if (adj[i][j] == -1 && i != j) {
                adj[i][j] = INT_MAX; 
            }
        }
    }

    // floyd warshall
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] < INT_MAX && adj[k][j] < INT_MAX)
                {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(adj[i][j] < INT_MAX && i != j)
           {
                ans = max(ans,adj[i][j]);
           }
        }
    }
    cout<<ans<<endl;
    return 0;
}
