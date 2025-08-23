#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        st.insert(x); //O(logN)
    }

    for(auto it=st.begin(); it != st.end(); it++)
    {
        cout<<*it<<endl;
    }

    if(st.count(100)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
