#include <iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;

    if(n >= 'a' || n >= 'z')
    {
        cout <<"ALPHA\nIS SMALL"<<endl ;
    }
    else if(n >= 'A' || n >= 'Z')
    {
        cout <<"ALPHA\nIS CAPITAL"<<endl;
    }
    else
    {
        cout <<"IS DIGIT"<<endl;
    }
    return 0;
}