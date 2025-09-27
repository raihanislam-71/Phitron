// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>> adj(V);
        for(vector<int> &e : edges)
        {
            int a = e[0] , b = e[1], c = e[2];
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }
        
        vector<int> dis(V,INT_MAX);
        
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({src,0});
        dis[src]=0;
        while(!pq.empty())
        {
            pair<int,int> parent = pq.top();
            pq.pop();
            
            int node = parent.first;
            int cost = parent.second;
            for(pair<int,int> child : adj[node])
            {
                int childNode = child.first;
                int childCost = child.second;
                if(cost + childCost < dis[childNode])
                {
                    // path relax
                    dis[childNode] = cost + childCost;
                    pq.push({childNode,dis[childNode]});
                }
            }
        }
        return dis;
    }
};