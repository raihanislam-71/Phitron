#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout<<par<<endl;
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int l;
    cin >> l;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(0);
    vector<int> r;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
        {
            r.push_back(i);
        }
    }
    if (r.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        sort(r.begin(), r.end(), greater<int>());
        for (int x : r)
        {
            cout << x << " ";
        }
    }
    return 0;
}
