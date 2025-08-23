#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int a, int m1, int m2)
    {
        name = nm;
        age = a;
        marks1 = m1;
        marks2 = m2;
    }
    void hello()
    {
        cout << "Hello" << endl;
    }
    int total_mark()
    {
        return marks1 + marks2;
    }
};
int main()
{
    Person raihan("Raihan islam", 18, 85, 95);
    raihan.hello();
    cout << raihan.name << " " << raihan.age << endl;
    cout << raihan.total_mark() << endl;
    return 0;
}