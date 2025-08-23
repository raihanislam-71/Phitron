#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int> st;
    queue<int> newq;
    while(k--)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        newq.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        newq.push(q.front());
        q.pop();
    }
    return newq;
}
