#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int m[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                m[i][j] = 0;
            }

            else
            {
                m[i][j] = -1;
            }
        }
    }

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
        if (m[x][y] == 1)
        {
            cout << "YES" << endl;
        }
        else if (m[x][y] == 0)
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
