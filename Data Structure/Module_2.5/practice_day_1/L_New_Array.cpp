#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;

    for(int i=0; i<n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    for(int i=0; i<n; i++)
    {
        int v2;
        cin >> v2;
        b.push_back(v2);
    }
    
    b.insert(b.end(),a.begin(),a.end());

    for(int val : b)
    {
        cout<<val<<" ";
    }
    return 0;
}