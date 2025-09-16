#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat,0,sizeof(mat));

    while(e--)
    {
        int a , b ;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1; //Directed a aita lage na
    }
    
    if(mat[3][4]) cout<<"connection ache"<<endl;
    else cout<<"connection nai"<<endl;
    return 0;
}
