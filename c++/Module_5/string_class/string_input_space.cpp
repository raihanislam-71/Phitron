#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin >> i;
    cin.ignore(); //getchar() // 2 tar same kaj

    string s;
    // cin.getline(s,100); // char s[100] aitar jonno ai babe kora hoi
    getline(cin,s);
    cout<<i<<endl;
    cout<<s<<endl;
    return 0;
}