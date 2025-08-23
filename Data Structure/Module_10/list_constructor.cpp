#include <bits/stdc++.h>
using namespace std;
int main()
{
    //1
    // list<int> mylist ;
    // cout << mylist.size()<<endl;

    //2
    // list<int> mylist (10);
    // cout<<mylist.size()<<endl;

    //3
    // list<int> mylist(10,4);

    //4
    // list<int> mylist = {1,2,3,4,5,6,7};
    // list<int> mylist2(mylist);

    //5
    // int arr[5] = {10,20,30,40,50};
    // list<int> mylist(arr,arr+5);
    
    vector<int> v = {100,200,300};
    list<int> mylist(v.begin(),v.end());

    // print 3 4 5
    for(int val : mylist)
    {
        cout<<val<<endl;
    }

    //or
    // for(auto it=mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    return 0;
}
