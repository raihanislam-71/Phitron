#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int f;
        cin >> f;
        char c;
        cin >> c;

        string s(f, c);
        int cnt=0;
        
        for (char c : s)
        {
            cnt++;
            if (cnt == f)
            {
                cout << c << endl;
            }
            else
            {
                cout << c << " ";
            }
        }
    }
    return 0;
}