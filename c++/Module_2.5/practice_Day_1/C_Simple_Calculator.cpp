#include<iostream>
using namespace std;
int main()
{
    long long int x,y;
    cin >> x >> y;
    long long int a = x + y;
    long long int b = x * y;
    long long int c = x - y;

    cout << x <<" + "<< y <<" = "<< a << endl;
    cout << x <<" * "<< y <<" = "<< b << endl;
    cout << x <<" - "<< y <<" = "<< c << endl;
    return 0;
}