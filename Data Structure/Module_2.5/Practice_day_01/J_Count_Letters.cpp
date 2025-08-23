#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v;
    char c;
    while (cin >> c)
    {
        v.push_back(c);
    }

    int cnt[26] = {0};
    for (int i = 0; i < v.size(); i++)
    {
        cnt[v[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            cout << (char)('a'+i)<< " : " << cnt[i] << endl;
        }
    }
    return 0;
}


