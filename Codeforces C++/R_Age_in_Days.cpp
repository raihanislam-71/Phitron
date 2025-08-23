#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int y = n / 365;
    cout << y << " years" << endl;
    n = n % 365;

    int m = n / 30;
    cout << m << " months" << endl;
    n = n % 30;

    int d = n / 1;
    cout << d << " days" << endl;

    return 0;
}