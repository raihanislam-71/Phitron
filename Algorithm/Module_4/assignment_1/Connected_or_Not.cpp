#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int m[n][n];
    memset(m,0,sizeof(m));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        m[a][b] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (m[x][y] != 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
