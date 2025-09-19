#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int s;
        cin >> s;
        int a[s];
        for (int i = 0; i < s; i++)
        {
            cin >> a[i];
        }

        bool flag = false;
        for (int i = 0; i < s - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = true;
                break;
            }
        }

        if (flag == true)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
