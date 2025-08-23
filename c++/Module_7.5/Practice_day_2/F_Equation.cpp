
//// build in function
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x , n;
//     cin >> x >> n;
//     double sum = pow(x,0)-1;
//     for(int i=2; i<=n; i+=2)
//     {
//         sum = sum + pow(x,i);
//     }
//     cout << sum << endl;
//     return 0;
// }

//// function
#include <bits/stdc++.h>
using namespace std;
long long int power(int a,int b)
{
    long long int result = 1;
    for(int i=0; i<b; i++)
    {
        result *= a;

    }
    return result;
}
int main()
{
    int x , n;
    cin >> x >> n;
    long long int sum = power(x,0)-1;

    for(int i=2; i<=n; i+=2)
    {
        sum += power(x,i);
    }
    cout<<sum<<endl;
    return 0;
}

