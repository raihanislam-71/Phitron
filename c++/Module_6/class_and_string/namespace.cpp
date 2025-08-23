#include <bits/stdc++.h>
using namespace std;
namespace raihan
{
    int age = 18;
    void hello()
    {
        cout<<"Raihan namespace"<<endl;
    }
}
namespace saruar
{
    int age2 = 19;
    void hello()
    {
        cout<<"saruar namespace"<<endl;
    }
}

using namespace raihan;

// using namespace raihan;
// using namespace saruar;
int main()
{
    cout<<age<<endl;
    hello();
    saruar :: hello();

    // cout<<age<<endl;
    // cout<<age2<<endl;
    // hello();
    // saruar :: hello();
    
    return 0;
}