#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";

    // // 1
    // for(int i=0; i<s.size(); i++)
    // {
    //     cout<<s[i]<<endl;
    // }

    // // 2
    // cout << *s.begin()<<endl;  // fast elemant ke point kore
    // cout << *(s.end()-1)<<endl; // last element ke point kore

    //// 3
    //// string :: iterator it; or auto
    for(auto it=s.begin(); it<s.end(); it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}