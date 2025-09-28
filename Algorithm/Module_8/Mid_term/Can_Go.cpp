#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<int, long long> a, pair<int, long long> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src, vector<long long> &dis, vector<vector<pair<int, int>>> &v)
{
    priority_queue<pair<int, long long>, vector<pair<int, long long>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        auto parent = pq.top();
        pq.pop();
        int node = parent.first;
        long long cost = parent.second;

        for (auto child : v[node])
        {
            int childNode = child.first;
            long long childCost = child.second;

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
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int, int>>> v(n + 1);
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    vector<long long> dis(n + 1, LLONG_MAX);
    int src, q;
    cin >> src >> q;

    dijkstra(src, dis, v);

    while (q--)
    {
        long long int d, w;
        cin >> d >> w;
        if (dis[d] <= w)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
