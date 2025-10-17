#include <bits/stdc++.h>
using namespace std;
int a[15][15];
int n , m;
int maxPath(int i, int j)
{
    if(i == n && j == m) return a[i][j];
    if(i > n || j > m) return INT_MIN;
    
    int down = maxPath(i+1,j);
    int right = maxPath(i,j+1);
    return a[i][j] + max(down,right);

}
int main()
{
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout<<maxPath(1,1)<<endl;

    return 0;
}
