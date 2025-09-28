#include <bits/stdc++.h>
#define ll long long int // macro
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 100;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> adj[i][j];
        }
    }

    // floyd warshall
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
