#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            int x;
            cin >> x;
            pq.push(x); //O(logN)
        }
        else if(n == 1)
        {
            pq.pop(); //O(logN)
        }
        else if(n == 2)
        {
            cout<<pq.top()<<endl; //O(logN)
        }
        else
        {
            break;
        }      
    }
    return 0;
}
