#include <bits/stdc++.h>
using namespace std;
class Edge
{
    public:
    int u,v,c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main() {
    int n,e;
    cin>>n>>e;
    vector<Edge> edgeList;
    while(e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u,v,c));
    }
    
    vector<int> dis(n+1,INT_MAX);
    dis[1]=0;

    for(int i=0; i<n-1; i++)
    {
        for(Edge ed : edgeList)
        {
            int u = ed.u, v = ed.v, c = ed.c;
            if(dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(dis[i] == INT_MAX) cout<<"30000"<<" ";
        else cout<<dis[i]<<" ";
    }
}
