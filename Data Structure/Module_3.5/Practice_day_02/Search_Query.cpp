#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        bool flag = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == t)
            {
                flag = true;
                break;
            }
            else if (t > a[mid])
            {
                // Right side
                l = mid + 1;
            }
            else
            {
                // left side
                r = mid - 1;
            }
        }

        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
