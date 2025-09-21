hclass Solution {
  public:
    vector<int> result;
    vector<bool> vis;

    void dfs_re(int src, vector<vector<int>>& adj) 
    {
        result.push_back(src);
        vis[src]=true;
        for(int child : adj[src])
        {
            if(vis[child]==false)
            {
                dfs_re(child , adj);
            }
        }
    }
        

    vector<int> dfs(vector<vector<int>>& adj) {
        int s = adj.size();
        vis.assign(s,false);
        dfs_re(0,adj);
        return result;
    }
};
