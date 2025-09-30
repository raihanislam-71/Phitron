#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int par[N];
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_level(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
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
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool
cmp(Edge a, Edge b)
{
    return a.w < a.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    dsu_initialize(n);
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;
    for (Edge ed : edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);

        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            dsu_union_by_level(ed.u, ed.v);
            totalCost += ed.w;
        }
    }
    cout << totalCost << endl;
    return 0;
}
