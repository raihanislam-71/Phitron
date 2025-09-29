// class Solution {
// public:
//     void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<char>>& grid, int n, int m)
//     {
//         if(i < 0 || i >= n || j < 0 || j >= m || vis[i][j] || grid[i][j] != '1')
//         {
//             return;
//         }
//         vis[i][j] = true;

//         dfs(i-1, j, vis, grid, n, m); //top
//         dfs(i, j+1, vis, grid, n, m); //right
//         dfs(i+1, j, vis, grid, n, m); //bottom
//         dfs(i, j-1, vis, grid, n, m); //left
//     }

//     int numIslands(vector<vector<char>>& grid) {
//         int islands = 0;
//         int n = grid.size();
//         int m = grid[0].size();

//         vector<vector<bool>> vis(n , vector<bool>(m , false));

//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<m; j++)
//             {
//                 if(grid[i][j] == '1' && !vis[i][j])
//                 {
//                     dfs(i,j,vis,grid,n,m);
//                     islands++;
//                 }
//             }
//         }
//         return islands;
//     }
// };
class Solution {
public:
    int n,m;
    bool vis[305][305];
    vector<pair<int,int>> v={{0,1},{0,-1},{-1,0},{1,0}};

    bool valid(int i, int j)
    {
        if(i >= 0 && j >= 0 && i<n && j<m) return true;
        else return false;
    }

    void dfs(int si, int sj, vector<vector<char>>& grid)
    {
        vis[si][sj]=true;
        for(int i=0; i<4; i++)
        {
            int ci = si + v[i].first;
            int cj = sj + v[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '1')
            {
                dfs(ci,cj,grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        memset(vis,false,sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        int ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    dfs(i,j,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};