#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    bool flag = false;
    for(int i=0; i<n-1; i++)
    {
        if(a[i] == a[i+1])
        {
            flag = true;
            break;
        }
    }
    //// or
    // for(int i=0; i<n; i++)
    // {
    //     if(find(a.begin()+i+1,a.end(),a[i]) != a.end())
    //     {
    //         flag = true;
    //         break;
    //     }
    // }

    if(flag == true) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}
