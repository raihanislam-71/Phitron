#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool isJessica = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            isJessica = true;
            break;
        }
    }

    if (isJessica)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}