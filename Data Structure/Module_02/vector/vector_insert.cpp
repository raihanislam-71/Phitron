#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40};
    vector<int> v2 = {101, 102, 103, 104};

    // v.insert(v.begin()+2,50);
    v.insert(v.begin() + 2, v2.begin(), v2.end());

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}