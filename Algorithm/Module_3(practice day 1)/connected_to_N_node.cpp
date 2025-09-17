#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int N;
    cin >> N;
    vector<int> r;
    for (int x : mat[N])
    {
        r.push_back(x);
    }
    cout << r.size() << endl;
    return 0;
}
