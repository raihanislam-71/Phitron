#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int value;
    student(string name, int value)
    {
        this->name= name;
        this->value = value;
    }
};


bool cmp(student a , student b)
{
    if(a.name == b.name)
        return a.value > b.value;
    return a.name < b.name;
}

int main()
{
    int n;
    cin >> n;
    vector<student> v;
    for (int i = 0; i < n; i++)
    {
        string name;
        int value;
        cin >> name >> value;
        v.push_back(student(name , value));
    }

    sort(v.begin(),v.end(),cmp);
    for(auto x : v)
    {
        cout<<x.name<<" "<<x.value<<endl;
    }
    return 0;
}
