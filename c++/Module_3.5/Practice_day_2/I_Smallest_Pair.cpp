#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b;
        cin >> b;
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            cin >> arr[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < b - 1; i++)
        {
            for (int j = i + 1; j < b; j++)
            {
                int s = arr[i] + arr[j] + j - i;

                if (s < mn)
                {
                    mn = s;
                }
            }
        }

        cout << mn << endl;

    }

    return 0;
}