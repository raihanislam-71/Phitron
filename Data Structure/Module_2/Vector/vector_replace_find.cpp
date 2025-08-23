#include <bits/stdc++.h>
using namespace std;
int main()
{
    // //replace
    // vector<int> v = {1, 2, 3, 5, 2, 4, 6, 2, 6, 3, 2};
    // replace(v.begin(), v.end(), 2, 100);

    // for (int x : v)
    // {
    //     cout<< x << " ";
    // }

    // find
    
    // vector<int> v = {1, 2, 3, 5, 2, 4, 6, 2, 6, 3, 2};
    // auto it = find(v.begin(), v.end(), 6);

    // if (it == v.end())
    //     cout << "Not Found" << endl;
    // else
    //     cout << "Found" << endl;

    vector<int> v = {4,4,5};
    int cnt=0;
    auto it = find(v.begin(), v.end(),6);

    if (it == v.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;
    return 0;
}