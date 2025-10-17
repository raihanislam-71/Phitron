#include <bits/stdc++.h>
using namespace std;
bool canReach(long long n, long long t)
{
    if (n == t)
        return true;
    if (n > t)
        return false;
    if (canReach(n * 10, t))
        return true;
    if (canReach(n * 20, t))
        return true;
    return false;
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long t;
        cin >> t;
        if (canReach(1, t))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
