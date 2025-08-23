#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char o;
    cin >> a >> o >> b;

    int result;
    if (o == '+')
    {
        result = a + b;
        cout << result << endl;
    }
    else if (o == '-')
    {
        result = a - b;
        cout << result << endl;
    }
    else if (o == '*')
    {
        result = a * b;
        cout << result << endl;
    }
    else if (o == '/')
    {
        result = a / b;
        cout << result << endl;
    }

    return 0;
}