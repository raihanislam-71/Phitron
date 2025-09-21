/*class Solution {
public:
    void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<int>>& grid, int n, int m)
    {
        if(i < 0 || i >= n || j < 0 || j >= m || vis[i][j] || grid[i][j] != 0)
        {
            return;
        }

        vis[i][j] = true;

        dfs(i-1, j, vis, grid, n, m); //top
        dfs(i, j+1, vis, grid, n, m); //right
        dfs(i+1, j, vis, grid, n, m); //bottom
        dfs(i, j-1, vis, grid, n, m); //left
    }

    int closedIsland(vector<vector<int>>& grid) {
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n , vector<bool>(m , false));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i == 0 || i == n-1 || j == 0 || j == m-1 ) 
                {
                    grid[i][j] = 1;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == 0 && !vis[i][j])
                {
                    dfs(i,j,vis,grid,n,m);
                    islands++;
                }
            }
        }
        return islands;
    }
};*/
class Solution {
public:
    vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    bool Valid(int i, int j, vector<vector<int>>& grid, int n, int m)
    {
        if(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 0)
        {
            return true;
        }
        return false;
    }
    void dfs(int i, int j, vector<vector<int>>& grid, int n, int m)
    {
        grid[i][j] = 1; 
        for (int k = 0; k< 4; k++)
        {
            int ci = i + v[k].first;
            int cj = j + v[k].second;
            if (Valid(ci, cj, grid, n, m))
            {
                dfs(ci, cj, grid, n, m);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i == 0 || i == n-1 || j == 0 || j == m-1) 
                {
                    if(grid[i][j] == 0)
                    {
                        dfs(i, j, grid, n, m);
                    }
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == 0)
                {
                    dfs(i, j, grid, n, m);
                    islands++;
                }
            }
        }
        return islands;
    }
};