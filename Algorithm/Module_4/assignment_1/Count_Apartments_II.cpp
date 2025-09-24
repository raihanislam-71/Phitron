#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

bool isValid(int i, int j, vector<vector<char>> &a, int n, int m)
{
    if (i >= 0 && j >= 0 && i < n && j < m && a[i][j] == '.')
    {
        return true;
    }
    return false;
}
void dfs(int si, int sj, vector<vector<char>> &a, vector<vector<bool>> &vis, int n, int m,int &cnt)
{
    
    cnt++;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if (isValid(ci, cj, a, n, m) && vis[ci][cj] == false)
        {
            dfs(ci, cj, a, vis, n, m,cnt);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<int> r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && vis[i][j]==false)
            {
                int cnt = 0;
                dfs(i, j, a, vis, n, m,cnt);
                r.push_back(cnt);
            }
        }
    }
    if(r.empty())
    {
        cout<<"0"<<endl;
    }
    else
    {
        sort(r.begin(),r.end());
        for(int x:r)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
