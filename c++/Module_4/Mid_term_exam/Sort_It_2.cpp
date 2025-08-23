#include <bits/stdc++.h>
using namespace std;
int* sort_it(int n)
{
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    return arr;
}
int main()
{
    int n;
    cin >> n;
    int* arr = sort_it(n);


    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}