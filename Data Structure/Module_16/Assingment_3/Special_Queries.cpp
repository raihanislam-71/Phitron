#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<string> Q1;
    queue<string> Q2;
    while(q--)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            string s;
            cin >> s;
            Q1.push(s);
        }
        else if(x == 1)
        {
            if(!Q1.empty())
            {
                Q2.push(Q1.front());
                Q1.pop();
            }
            else Q2.push("Invalid");
        }
    }
    while(!Q2.empty())
    {
        cout<<Q2.front()<<endl;
        Q2.pop();
    }
    return 0;
}
