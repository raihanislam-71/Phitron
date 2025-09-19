#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    int y;
    cin >> y;
    int b[y];
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }

    int t;
    cin >> t;

    int r[x + y];
    int k=0;
    int i=0;
    while(i < x+y)
    {
        if (i == t)
        { 
            for (int j = 0; j < y; j++)
            {
                r[i] = b[j];
                i++;
            }
        }
        else
        {
            r[i] = a[k];
            i++;
            k++;
        }
    }

    for(int i=0; i<x+y; i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;
//     int a[x];
//     for (int i = 0; i < x; i++)
//     {
//         cin >> a[i];
//     }

//     int y;
//     cin >> y;
//     int b[y];
//     for (int i = 0; i < y; i++)
//     {
//         cin >> b[i];
//     }

//     int t;
//     cin >> t;

//     int r[x + y];
//     int index = 0;

//     // Copy a[0 to t-1] into r
//     for (int i = 0; i < t; i++)
//     {
//         r[index++] = a[i];
//     }

//     // Copy b[0 to y-1] into r
//     for (int i = 0; i < y; i++)
//     {
//         r[index++] = b[i];
//     }

//     // Copy a[t to x-1] into r
//     for (int i = t; i < x; i++)
//     {
//         r[index++] = a[i];
//     }

//     // Print result
//     for (int i = 0; i < x + y; i++)
//     {
//         cout << r[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
