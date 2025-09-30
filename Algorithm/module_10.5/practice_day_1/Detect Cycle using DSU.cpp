class Solution {
  public:
    // Function to detect cycle using DSU in an undirected graph.
    int parent[10005];
    int group_size[10005];
    void dsu_initialize(int n)
    {
        for (int i = 0; i < n; i++)
        {
            parent[i] = -1;
            group_size[i] = 1;
        }
    }
    
    int dsu_fine(int node)
    {
        if (parent[node] == -1)
            return node;
        int leader = dsu_fine(parent[node]);
        parent[node] = leader;
        return leader;
    }
    
    void dsu_union_by_size(int node1, int node2)
    {
        int leaderA = dsu_fine(node1);
        int leaderB = dsu_fine(node2);
        if (group_size[leaderA] > group_size[leaderB])
        {
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
    int detectCycle(int V, vector<int> adj[]) {
        // Code here
        dsu_initialize(V);
        
        for(int u=0; u<V; u++)
        {
            for(int v : adj[u])
            {
                if( u < v)
                {
                    int leaderU = dsu_fine(u);
                    int leaderV = dsu_fine(v);
                    if(leaderU == leaderV)
                    {
                        return 1;
                    }
                    else
                    {
                        dsu_union_by_size(u,v);
                    }
                }
            }
        }
        return 0;
    }
};