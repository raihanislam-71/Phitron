#include <bits/stdc++.h>
using namespace std;

void dijkstra(int src, vector<int> &dis, vector<vector<pair<int, int>>> &adj)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        for (pair<int, int> child : adj[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int n, s, f;
    cin >> n >> s >> f;
    s--; // 0-based
    f--;

    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<pair<int, int>>> adj(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // convert to adjacency list
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] >= 0 && i != j)
            {
                adj[i].push_back({j, a[i][j]});
            }
        }
    }
    vector<int> dis(n, INT_MAX);
    dijkstra(s, dis, adj);

    if (dis[f] == INT_MAX)
        cout << -1 << endl;
    else
        cout << dis[f] << endl;

    return 0;
}
