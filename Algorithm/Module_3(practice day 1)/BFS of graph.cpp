class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int s = adj.size();
        vector<int> result;
        bool vis[s];
        memset(vis,false,sizeof(vis));
        
        queue<int> q;
        q.push(0);
        vis[0]=true;
        
        while(!q.empty())
        {
            int par = q.front();
            q.pop();
            
            result.push_back(par);
            
            for(int child : adj[par])
            {
                if(vis[child] == false)
                {
                    q.push(child);
                    vis[child]=true;
                }
            }
        }
        
        return result;
    }
};