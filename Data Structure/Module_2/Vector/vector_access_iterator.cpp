#include <bits/stdc++.h>
using namespace std;
int main()
{
    ////Access
    // vector<int> v={1,2,3,4,5};
    
    // fast
    // cout<<v[0]<<endl;
    // cout<<v.front()<<endl;

    // last
    //  cout<<v.back()<<endl;
    //  cout<<v[v.size()-1]<<endl;

    // //iterator
    // vector<int> v={1,2,3,4,5};
    // vector<int> :: iterator  it;

    // for(it=v.begin(); it<v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    /// or
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}