#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name , int age)
    {
        this->name = name;
        this->age = age;
    }
    void hello()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    Person raihan("Raihan islam",18);
    raihan.hello();
    cout<<raihan.name<<" "<<raihan.age<<endl;
    return 0;
}