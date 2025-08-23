#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int mark;
        student(string name,int roll,int mark)
        {
            this->name = name;
            this->roll = roll;
            this->mark = mark;
        }
};

class cmp
{
    public:
        bool operator()(student a,student b)
        {
            if(a.mark == b.mark)
                return a.roll > b.roll;
            return a.mark < b.mark;
        }
};
int main()
{
    priority_queue <student , vector<student> , cmp> pq;

    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string name;
        int roll , mark;
        cin >> name >> roll >> mark;
        pq.push(student(name,roll,mark));
    }

    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            string name;
            int roll , mark;
            cin >> name >> roll >> mark;
            pq.push(student(name,roll,mark));
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
        }
        else if(x == 1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
            }
        }
        else if(x == 2)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                pq.pop();
                if(pq.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else
                {
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
                }
            }
        }
    }
    return 0;
}
