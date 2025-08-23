#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int val;

    // while(true)
    // {
    //     cin >> val;
    //     if(val == -1) break;
    //     myList.push_back(val);
    // }
    
    while(cin >> val && val != -1)
    {
        myList.push_back(val);
    }

    for (int x : myList) {
        cout << x << " ";
    }
    return 0;
}
