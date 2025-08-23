#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int x , y;
    cin >> x >> y;
    while(x--)
    {
        int a;
        cin >> a;
        s.push(a);
    }
    while(y--)
    {
        int b;
        cin >> b;
        q.push(b);
    }
    bool flag = true;
    while(!s.empty() && !q.empty())
    {
        if(s.top() != q.front())
        {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }
    
    if(s.empty() && q.empty()) flag = true;
    else flag = false;

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
