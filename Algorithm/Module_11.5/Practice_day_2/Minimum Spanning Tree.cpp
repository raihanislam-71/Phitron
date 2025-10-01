class Solution {
  public:
    int par[1005];
    int gp_sz[1005];
    
    void dsu_initialize(int n)
    {
        for(int i=0; i<n; i++)
        {
            par[i] = -1;
            gp_sz[i] = 1;
        }
    }
    
    int dsu_fine(int node)
    {
        if(par[node] == -1) return node;
        int leader = dsu_fine(par[node]);
        par[node] = leader;
        return leader;
    }
    
    void dsu_union_by_size(int n1, int n2)
    {
        int leaderA = dsu_fine(n1);
        int leaderB = dsu_fine(n2);
        if(gp_sz[leaderA] > gp_sz[leaderB])
        {
            par[leaderB] = leaderA;
            gp_sz[leaderA] += gp_sz[leaderB];
        }
        else
        {
            par[leaderA] = leaderB;
            gp_sz[leaderB] += gp_sz[leaderA];
        }
    }
    
    class Edge
    {
    public:
        int u, v, w;
        Edge(int u, int v, int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
    };
    
    static bool cmp(Edge a, Edge b)
    {
        return a.w < b.w;
    }
    
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        dsu_initialize(V);
        vector<Edge> edgeList;
        
        for(vector<int> ed : edges)
        {
            int u = ed[0] , v = ed[1], w = ed[2];
            edgeList.push_back(Edge(u,v,w));
        }
        
        sort(edgeList.begin(), edgeList.end(), cmp);
        int totalCost = 0;
        
        for(Edge ed : edgeList)
        {
            int a = dsu_fine(ed.u);
            int b = dsu_fine(ed.v);
            
            if(a != b)
            {
                dsu_union_by_size(ed.u, ed.v);
                totalCost += ed.w;
            }
        }
        
        return totalCost;
        
    }
};















