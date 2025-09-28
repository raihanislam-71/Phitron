#include <bits/stdc++.h>
using namespace std;
int n, m;
bool flag = false;
vector<pair<int, int>> v = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
void dfs(int fi, int fj, int ei, int ej, vector<vector<char>> &mat, vector<vector<bool>> &vis)
{
    vis[fi][fj] = true;
    if (fi == ei && fj == ej)
    {
        flag = true;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci = fi + v[i].first;
        int cj = fj + v[i].second;
        if (isValid(ci, cj) && vis[ci][cj] == false && mat[ci][cj] == '.')
        {

            dfs(ci, cj, ei, ej, mat, vis);
        }
    }
}
int main()
{
    cin >> n >> m;
    vector<vector<char>> mat(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int fi, fj, ei, ej;
    cin >> fi >> fj >> ei >> ej;
    dfs(fi, fj, ei, ej, mat, vis);

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
