#include <bits/stdc++.h>
using namespace std;
void print_first(list<int> &myList)
{
    cout<<"L -> ";
    for(int val : myList)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

void print_last(list<int> &b)
{

    cout<<"R -> ";
    for(int val : b)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> myList;
    int q;
    cin >> q;
    while(q--)
    {
        int pos , val;
        cin >> pos >> val;
        if(pos == 0)
        {
            myList.push_front(val);
        }
        else if(pos == 1)
        {
            myList.push_back(val);
        }
        else if(pos == 2)
        {
            if(val >=0 && val < myList.size())
            {
                auto it = myList.begin();
                advance(it,val);
                myList.erase(it);
            }
        }
        print_first(myList);
        list<int> b;
        b = myList;
        b.reverse();
        print_last(b);
    }
    return 0;
}
