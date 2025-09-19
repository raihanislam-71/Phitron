#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h = n / 2;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << "\\";
            }
            else if (j == n - 1 - i)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = h; i <= h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = h - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << "/";
            }
            else if (j == n - 1 - i)
            {
                cout << "\\";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
