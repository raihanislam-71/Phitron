#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int cnt[26] = { 0 };

    for (int i = 0; i < n; i++)
    {
        char h;
        cin >> h;
        cnt[h - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (cnt[i]--)
        {
            cout << (char)(i + 'a');
        }
    }
    return 0;
}