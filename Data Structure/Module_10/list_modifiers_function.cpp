#include <bits/stdc++.h>
using namespace std;
int main()
{
    //1
    // list<int> mylist = {10,20,30};
    // list<int> newlist;
    // newlist = mylist;
    // // newlist.assign(mylist.begin(),mylist.end());
    // for(int val:newlist)
    // {
    //     cout<<val<<endl;
    // }

    //2
    // list<int> mylist = {10,20,30};

    // mylist.push_front(100);
    // mylist.push_back(200);

    // mylist.pop_front();
    // mylist.pop_back();

    // for(int val:mylist)
    // {
    //     cout<<val<<endl;
    // }

    //3
    // list<int> mylist = {10,20,30};
    // list<int> newlist = {100,200,300};
    // vector<int> v = {1,2,3,4,5};

    // mylist.insert(next(mylist.begin(),3),100); // ai khane next holo akta loop
    // // mylist.insert(next(mylist.begin(),1),newlist.begin(),newlist.end());
    // // mylist.insert(next(mylist.begin(),1),v.begin(),v.end());

    // for(int val:mylist)
    // {
    //     cout<<val<<endl;
    // }

    //4
    // list<int> mylist = {10,20,30,40,50,60,70};

    // // mylist.erase(next(mylist.begin(),2));
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));

    // for(int val:mylist)
    // {
    //     cout<<val<<endl;
    // }

    //5
    // list<int> mylist = {10,20,30,40,30,60,30};
    // replace(mylist.begin(),mylist.end(),30,100);
    // for(int val:mylist)
    // {
    //     cout<<val<<endl;
    // }

    //6
    list<int> mylist = {10,20,30,40,30,60,30};
    
    auto it = find(mylist.begin(),mylist.end(),40);
    if(it == mylist.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    
    return 0;
}
