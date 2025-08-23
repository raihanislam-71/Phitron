#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    
    while(n--)
    {
        string s;
        cin >> s;
        int f_count = 0;
        int s_count = 0;
        for(int i=0; i<6; i++)
        {
            
            if(i < 3)
            {
                f_count += s[i]-'0';
            }
            else
            {
                s_count += s[i]-'0';
            }
        }
        if(f_count == s_count)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}