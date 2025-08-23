// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         cin.ignore();
//         string s;
//         getline(cin, s);
//         int cnt = 0;
//         for (int i = 0; i < a; i++)
//         {
//             string s2 = s;
//             if (s2[i] == '0')
//             {
//                 s2[i] = '1';
//             }
//             else
//             {
//                 s2[i] = '0';
//             }
//             // 1 st
//             // for(int i=0; i<s2.size(); i++)
//             // {
//             //     if(s2[i] == '1')
//             //     {
//             //         cnt++;
//             //     }
//             // }

//             //2 nd
//             // for (int c : s2)
//             // {
//             //     if (c == '1')
//             //     {
//             //         cnt++;
//             //     }
//             // }

//             //3 rd
//             cnt += count(s2.begin(), s2.end(), '1'); 
//         }
//         cout << cnt << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            string s2 = s;
            if (s2[i] == '0') s2[i] = '1';

            else s2[i] = '0';

            cnt += count(s2.begin(), s2.end(), '1'); 
        }
        cout << cnt << endl;
    }

    return 0;
}