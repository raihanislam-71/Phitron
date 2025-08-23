#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    //type-1
    // cout<<v.size()<<endl;
    
    //type-2
    // cout<<v.max_size()<<endl;

    //type-3
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;

    //type-4
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear();
    // cout<<v.size()<<endl;

    //type
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(3);
    // v.resize(7,10);
    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}