#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<pair<int, int>> v = {{-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}};

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
void bfs(int ki, int kj, int qi, int qj, vector<vector<bool>> &vis, vector<vector<int>> &dis)
{
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    dis[ki][kj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int f = par.first, s = par.second;

        // kaj
        if (f == qi && s == qj)
        {
            break;
        }

        for (int i = 0; i < 8; i++)
        {
            int ci = f + v[i].first;
            int cj = s + v[i].second;
            if (isValid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[f][s] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vector<vector<int>> dis(n, vector<int>(m, -1));
        bfs(ki, kj, qi, qj, vis, dis);
        cout << dis[qi][qj] << endl;
    }
    return 0;
}
