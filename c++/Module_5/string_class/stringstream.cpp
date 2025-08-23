#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s; // (s) theke akta akta word (ss) jaita se
    string word;
    while (ss >> word) // (ss) theke akta akta word (word) jaita se
    {
        cout << word << endl;
    }
    return 0;
}