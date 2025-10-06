// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 5;
// int n, m;
// char a[N + 1][N + 1];
// int vis[N + 1][N + 1];
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// int dis[N][N];
// pair<int, int> dest;

// bool valid(int ci, int cj)
// {
//     if (ci >= 1 && cj >= 1 && ci <= n && cj <= m)
//         return true;
//     else
//         return false;
// }
// bool found = false;

// void bfs(int si, int sj)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
//     dis[si][sj] = 0;
//     while (!q.empty())
//     {
//         pair<int, int> p = q.front();
//         q.pop();

//         int f = p.first, s = p.second;
//         if (a[f][s] == 'D')
//         {
//             found = true;
//             dest = {f, s};
//             return;
//         }
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = f + d[i].first;
//             int cj = s + d[i].second;
//             if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
//             {
//                 q.push({ci, cj});
//                 vis[ci][cj] = true;
//                 dis[ci][cj] = dis[f][s] + 1;
//             }
//         }
//     }
// }
// int main()
// {
//     cin >> n >> m;
//     int si, sj;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cin >> a[i][j];
//             if (a[i][j] == 'R')
//             {
//                 si = i;
//                 sj = j;
//             }
//         }
//     }
//     memset(vis, false, sizeof(vis));
//     memset(dis, -1, sizeof(dis));
//     bfs(si, sj);


//     int x = 1, y = 4;
//     while (dis[x][y] != -1)
//     {
//         if (a[x][y] != 'R' && a[x][y] != 'D')
//             a[x][y] = 'X';
//         dis[x][y] =  dis[x][y];
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cout << a[i][j];
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n, m;
char a[N + 1][N + 1];
int vis[N + 1][N + 1];
int dis[N + 1][N + 1];
pair<int, int> par[N + 1][N + 1];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
pair<int, int> dest;

bool valid(int ci, int cj)
{
    if (ci >= 1 && cj >= 1 && ci <= n && cj <= m)
        return true;
    else
        return false;
}

bool found = false;

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    par[si][sj] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int f = p.first, s = p.second;
        if (a[f][s] == 'D')
        {
            found = true;
            dest = {f, s};
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            int ci = f + d[i].first;
            int cj = s + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[f][s] + 1;
                par[ci][cj] = {f, s};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);

    if (found)
    {
        pair<int, int> cur = dest;
        while (true)
        {
            int x = cur.first;
            int y = cur.second;
            if (a[x][y] != 'R' && a[x][y] != 'D')
                a[x][y] = 'X';
            if (par[x][y].first == -1 && par[x][y].second == -1)
                break;
            cur = par[x][y];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
