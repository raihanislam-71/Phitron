#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    // char s[100];
    // cin >> s;
    // cout << strlen(s) << endl;
    // cout << s << endl;

    char s[100];
    int a;
    cin >> a;
    getchar();
    // fgets(s , 100 ,stdin);
    cin.getline(s , 100);
    cout << a << endl;
    cout << s << endl;
    return 0;
}