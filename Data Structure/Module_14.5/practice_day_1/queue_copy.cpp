#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1 , q2;
    stack<int> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    while(!q1.empty())
    {
        s.push(q1.front());
        q1.pop();
    }

    while(!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }

    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}

////Use Recursive
// #include <bits/stdc++.h>
// using namespace std;
// void reverseQueue(queue<int> &q1)
// {
//     if (q1.empty()) return;
//     int x = q1.front();
//     q1.pop();
//     reverse(q1);
//     q1.push(x);

// }
// int main()
// {
//     queue<int> q1;
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++)
//     {
//         int x;
//         cin >> x;
//         q1.push(x);
//     }
//     reverseQueue(q1);
//     while(!q1.empty())
//     {
//         cout<<q1.front()<<" ";
//         q1.pop();
//     }
//     return 0;
// }

