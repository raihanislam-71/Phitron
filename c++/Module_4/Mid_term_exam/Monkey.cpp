

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int count[26] = { 0 };
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
        }
        for (int i = 0; i < 26;i++) {
            while (count[i]--)
            {
                cout << (char)(i + 'a');
            }
        }
        cout << endl;
    }
    return 0;
}
