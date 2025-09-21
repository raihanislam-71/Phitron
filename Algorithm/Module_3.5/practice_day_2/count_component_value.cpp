#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
vector<int> r;
int cnt = 0;
void dfs(int src)
{
    cnt++;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
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
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            dfs(i);
            r.push_back(cnt);
            cnt = 0;
        }
    }
    
    sort(r.begin(), r.end());

    for (int c : r)
    {
        cout << c << " ";
    }
    return 0;
}
