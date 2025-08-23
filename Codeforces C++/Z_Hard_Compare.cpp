#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long double x = b*log(a);
    long double y = d*log(c);
    
    if(x == y) cout << "NO" <<endl;
    else if(x > y) cout << "YES" <<endl;
    else cout<< "NO" <<endl;

    return 0;
}