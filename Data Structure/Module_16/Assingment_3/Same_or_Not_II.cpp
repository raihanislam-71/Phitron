#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }    
    int size()
    {
        return l.size();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    } 
};
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }    
    int size()
    {
        return l.size();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }

};
int main()
{
    myStack s;
    myQueue q;
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
