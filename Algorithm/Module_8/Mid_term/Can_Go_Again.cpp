#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v;
    long long c;
    Edge(int u, int v, long long c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while (e--)
    {
        int u, v;
        long long c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }

    vector<long long> dis(n + 1, LLONG_MAX);
    int src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : edgeList)
        {
            int u = ed.u, v = ed.v;
            long long c = ed.c;
            if (dis[u] < LLONG_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (Edge ed : edgeList)
    {
        int u = ed.u, v = ed.v;
        long long c = ed.c;
        if (dis[u] < LLONG_MAX && dis[u] + c < dis[v])
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int w;
        cin >> w;
        if (dis[w] == LLONG_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[w] << endl;
        }
    }
    return 0;
}
