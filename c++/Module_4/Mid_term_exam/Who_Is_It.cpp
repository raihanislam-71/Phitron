#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int mark;
    void setStudent(int id,string name,char section,int mark)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->mark = mark;
    }
};

// bool compare(Student a, Student b) {
//     if (a.mark != b.mark)
//         return a.mark> b.mark; // Marks beshi thakle age
//     else
//         return a.id < b.id; // Tie hole ID chhoto thakle age
// }
bool compare(Student a, Student b){
    if(a.mark!=b.mark){
        if(a.mark > b.mark) return true;
        else return false;
    }
    else{
        if(a.id<b.id) return true;
        else return false;
    }
}

int main()
{
    int t ;
    cin >> t;

    while (t--)
    {
        int id;
        string name;
        char section;
        int mark;
        Student st_list[3];
        int x =3;
        while (x--)
        {
            cin>>id>>name>>section>>mark;
            Student st =  Student();
            st.setStudent(id, name, section, mark);
            st_list[x] = st;
        }

        sort(st_list, st_list+3,compare);
        cout<<(st_list[0]).id<<" " << (st_list[0]).name<<" " << (st_list[0]).section <<" "<<(st_list[0]).mark <<endl;
        
    }
    
    return 0;
}