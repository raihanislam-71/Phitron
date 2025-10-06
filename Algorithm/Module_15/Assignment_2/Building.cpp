#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e5;
ll par[N];
ll group_size[N];
void dsu_initialize(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}

ll dsu_find(ll node)
{
    if (par[node] == -1)
        return node;
    ll leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_size(ll node1, ll node2)
{
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge
{
public:
    int u, v;
    ll w;
    Edge(int u, int v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgeList;

    while (e--)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    ll totalCost = 0;
    ll edgeCount = 0;
    for (Edge ed : edgeList)
    {
        ll leaderA = dsu_find(ed.u);
        ll leaderB = dsu_find(ed.v);
        if (leaderA != leaderB)
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
            edgeCount++;
        }
    }
    if(edgeCount == n-1) cout << totalCost << endl;
    else cout<<-1<<endl;

    return 0;
}
