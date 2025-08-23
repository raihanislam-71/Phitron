#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_mark;
    int eng_mark;
    int sum;
};

bool cmp(Student a, Student b)
{

    if (a.sum == b.sum)
    {
        return a.id < b.id;
    }
    else
    {
        return a.sum > b.sum;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mark >> a[i].eng_mark;
    }

    for (int i = 0; i < n; i++)
    {
        a[i].sum = a[i].math_mark + a[i].eng_mark;
    }
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mark << " " << a[i].eng_mark << endl;
    }
    return 0;
}