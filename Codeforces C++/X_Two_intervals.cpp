#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int f = max(l1,l2);
    int l =min(r1,r2);

    if(f <= l)
    {
        cout << f <<" "<< l << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}