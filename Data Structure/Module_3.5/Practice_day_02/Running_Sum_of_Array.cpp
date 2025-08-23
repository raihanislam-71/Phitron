////vector use
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);

//     for(int i=0; i<n; i++)
//     {
//         cin >> v[i];
//     }

//     int sum = 0;
//     for(int i=0; i<n; i++)
//     {
//         sum+=v[i];
//         cout << sum << " ";
//     }
//     return 0;
// }

//// function and vector use
#include <bits/stdc++.h>
using namespace std;
void sum(int n)
{
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        cout << sum << " ";
    }

}
int main()
{
    int n;
    cin >> n;
    sum(n);
    return 0;
}