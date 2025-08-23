#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *raihan = new Person("Raihan islam", 18);
    Person *saruar = new Person("Saruar hossan", 18);

    // 1
    // raihan = saruar;  //did'n work

    //2
    // raihan->name = saruar->name;  // aita work kore kinto besi element hole sommoy besi lagbe
    // raihan->age = saruar->age;

    //3
    *raihan = *saruar;  // work and fast  aita use korte joto e element thakon na keno sob ak bare e hoia jabe

    delete saruar;
    cout << raihan->name << " " << raihan->age << endl;
    return 0;
}