#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n, m;
char a[N][N];
bool vis[N][N];
int cnt;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj)
{
    if (ci >= 1 && ci <= n && cj >= 1 && cj <= m)
        return true;
    else
        return false;
}


void dfs(int si, int sj)
{
    cnt++;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                cnt = 0;
                dfs(i, j);
                ans.push_back(cnt);
            }
        }
    }

    if (ans.empty())
        cout << -1 << endl;
    else
    {
        sort(ans.begin(),ans.end());
        cout<<ans.front()<<endl;
    }
    return 0;
}
