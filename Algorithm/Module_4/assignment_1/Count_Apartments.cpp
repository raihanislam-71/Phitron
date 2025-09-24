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
void dfs(int si, int sj, vector<vector<char>> &a, vector<vector<bool>> &vis, int n, int m)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if (isValid(ci, cj, a, n, m) && vis[ci][cj] == false)
        {
            dfs(ci, cj, a, vis, n, m);
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

    int cmp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && vis[i][j]==false)
            {
                dfs(i, j, a, vis, n, m);
                cmp++;
            }
        }
    }
    cout << cmp << endl;
    return 0;
}

////
// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1005;

// char a[N][N];
// bool vis[N][N];

// vector<pair<int, int>> v = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

// bool isValid(int i, int j, int n, int m)
// {
//     if (i >= 0 && j >= 0 && i < n && j < m && a[i][j] == '.')
//     {
//         return true;
//     }
//     return false;
// }

// void dfs(int si, int sj, int n, int m)
// {
//     vis[si][sj] = true;
//     for (int k = 0; k < 4; k++)
//     {
//         int ci = si + v[k].first;
//         int cj = sj + v[k].second;
//         if (isValid(ci, cj, n, m) && vis[ci][cj] == false)
//         {
//             dfs(ci, cj, n, m);
//         }
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     memset(vis,false,sizeof(vis));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];

//         }
//     }

//     int cmp = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] == '.' && vis[i][j] == false)
//             {
//                 dfs(i, j, n, m);
//                 cmp++;
//             }
//         }
//     }

//     cout << cmp << endl;
//     return 0;
// }

