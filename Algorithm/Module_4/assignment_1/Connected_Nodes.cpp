#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> m[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if(m[t].empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            sort(m[t].begin(),m[t].end(),greater<int>());
            for (int x : m[t])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
