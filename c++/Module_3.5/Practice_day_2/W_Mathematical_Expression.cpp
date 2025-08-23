#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char  q, s;
    cin >> a >> s >> b >> q >> c;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;

    if (s == '+')
    {
        if (add == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << add << endl;
        }
    }

    else if (s == '-')
    {
        if (sub == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sub << endl;
        }
    }

    else if (s == '*')
    {
        if (mul == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << mul << endl;
        }
    }
    return 0;
}