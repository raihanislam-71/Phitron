#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int t;
        cin >> t;
        int l = 0;
        int r = n - 1;
        bool flag = false;

        // Binary Search
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
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}
