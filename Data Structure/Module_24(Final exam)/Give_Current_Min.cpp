#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<long long , vector<long long> , greater<long long>> pq;
    long long n;
    cin >> n;
    for(long long i=0; i<n; i++)
    {
        long long f;
        cin >> f;
        pq.push(f);
    }
    long long q;
    cin >> q;
    while(q--)
    {
        long long x;
        cin >> x;
        if(x == 0)
        {
            long long v;
            cin >> v;
            pq.push(v);
            cout<<pq.top()<<endl;
        }
        else if(x == 1)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if(x == 2)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if(pq.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else
                {
                    cout<<pq.top()<<endl;
                }
            }
        }
    }
    return 0;
}
