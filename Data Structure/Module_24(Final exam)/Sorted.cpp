#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int v;
            cin >> v;
            st.insert(v);
        }

        for(auto it = st.begin(); it != st.end(); it++)  cout<<*it<<" ";
        cout<<endl;
        st.clear();
    }
    return 0;
}
