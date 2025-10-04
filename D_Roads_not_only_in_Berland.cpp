#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int par[N];
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
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

void dsu_union_by_size(int node1, int node2)
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
int main()
{
    int n;
    cin >> n;
    dsu_initialize(n);
    vector<pair<int, int>> extra;
    vector<pair<int, int>> creat;
    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            extra.push_back({a, b});
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }

    cout << extra.size() << endl;
    for (int i = 2; i <= n; i++)
    {
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);
        if (leaderA != leaderB)
        {
            creat.push_back({1, i});
            dsu_union_by_size(1, i);
        }
    }

    for (int i = 0; i < extra.size(); i++)
    {
        cout << extra[i].first << " " << extra[i].second << " " << creat[i].first << " " << creat[i].second << endl;
    }
    return 0;
}
