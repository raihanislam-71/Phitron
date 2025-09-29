class Solution {
public:
    int n , m;
    bool vis[105][105];
    vector<pair<int,int>> t ={{0,1},{0,-1},{-1,0},{1,0}};
    int ans;
    bool valid(int i , int j)
    {
        if(i >= 0 && j >= 0 && i < n && j < m) return true;
        else return false;
    }
    void dfs(int si, int sj, vector<vector<int>>& grid)
    {
        vis[si][sj] = true;
        for(int i=0; i<4; i++)
        {
            int ci = si + t[i].first;
            int cj = sj + t[i].second;

            if(valid(ci,cj))
            {
                if(grid[ci][cj]==0) ans++;
            }
            else
            {
                ans++;
            }
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1)
            {
                dfs(ci,cj,grid);
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        memset(vis,false,sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};