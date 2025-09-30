#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int parent[N];
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_fine(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_fine(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_fine(node1);
    int leaderB = dsu_fine(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);

    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_fine(a);
        int leaderB = dsu_fine(b);
        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }

    if (cycle)
        cout << "Cycle Found" << endl;
    else
        cout << "Cycle Not Found" << endl;
    return 0;
}
