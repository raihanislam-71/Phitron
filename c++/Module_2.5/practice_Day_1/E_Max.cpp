#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(mn < arr[i])
        {
            mn = arr[i];
        }
    }

    cout << mn <<endl ;

    return 0;
}
