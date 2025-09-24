#include <bits/stdc++.h>
using namespace std;
bool flag = false;
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool isValid(int i, int j, vector<vector<char>> &a, int n, int m)
{
    if (i >= 0 && j >= 0 && i < n && j < m && (a[i][j] == '.' || a[i][j] == 'B'))
    {
        return true;
    }
    return false;
}
void dfs(int si, int sj, vector<vector<char>> &a, vector<vector<bool>> &vis, int n, int m)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if (isValid(ci, cj, a, n, m) && vis[ci][cj] == false)
        {
            if (a[ci][cj] == 'B')
            {
                flag = true;
                return;
            }
            dfs(ci, cj, a, vis, n, m);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<char>> a(n, vector<char>(e));
    vector<vector<bool>> vis(n, vector<bool>(e, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (a[i][j] == 'A')
            {
                dfs(i, j, a, vis, n, e);
            }
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
