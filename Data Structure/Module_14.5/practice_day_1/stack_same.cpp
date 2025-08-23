#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    int sz = 0;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }

};
int main()
{
    myStack s1 , s2;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        s2.push(x);
    }
    bool flag = true;
    while(!s1.empty() && !s2.empty())
    {
        if(s1.top() != s2.top())
        {
            flag = false;
            break;
        }
        s1.pop();
        s2.pop();
    }

    if(flag == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    } 
    return 0;
}
