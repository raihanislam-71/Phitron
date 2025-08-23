#include <bits/stdc++.h>
using namespace std;
int main()
{
    //1
    // list<int> mylist ={10,20,30};
    // cout<<mylist.size()<<endl;   

    //2
    // list<int> mylist ={10,20,30};
    // cout<<mylist.max_size()<<endl;  
    
    //3
    // list<int> mylist ={10,20,30};
    // cout<<mylist.size()<<endl;
    
    // mylist.clear();
    // cout<<mylist.size()<<endl;
    // for(int val : mylist)
    // {
    //     cout<<val<<endl;
    // }

    //4
    list<int> mylist ={10,20,30,40};
    mylist.resize(2); //ai khane size 2 korar karone list a 2 ta val asse baki gola delete hoia gese
    mylist.resize(5); // first a size 2 kore list ar size 2 silo akon abar 5 korar karone size up hoise kito kono value na thakar karone baki golate 0 asse
    // mylist.resize(5,100); // chaile ai bade value o dea jai 
    for(int val : mylist)
    {
        cout<<val<<endl;
    }

    return 0;
}
