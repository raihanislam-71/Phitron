#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> q;
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;
    while(!st.empty() && !q.empty())
    {
        if(st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
