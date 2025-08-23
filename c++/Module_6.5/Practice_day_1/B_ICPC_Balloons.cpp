#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int sum = 0;
        int frq [26] = {0};
        bool f [26] ={true};
        for(char c : s)
        {
            if(frq[c-'A'] == 0)
            {
                sum = sum + 2 ;
                frq[c-'A']++;
            }
            else
            {
                sum = sum + 1;
                frq[c-'A']++;
            }
            
        }
        cout<< sum << endl ;
    }
    return 0;
}