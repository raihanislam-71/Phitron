#include <iostream>
using namespace std;
int * fun()
{
    int *a = new int ;
    *a = 100;
    return a;
}
int main()
{
    int *p = fun();
    cout << *p <<  endl;

    
    // int *a = new int ;
    // *a = 10;
    // cout << *a << endl;

    // //delete a;
    
    // float *f = new float;
    // *f = 41.04;
    // cout << *f << endl;
    return 0;
}
