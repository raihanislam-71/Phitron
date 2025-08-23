#include <iostream>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student raihan(77 , 12 , 4.47);
    Student nithor(59 , 12 , 4.56);

    cout <<raihan.roll <<" "<<raihan.cls<<" "<<raihan.gpa<<endl;
    cout <<nithor.roll <<" "<<nithor.cls<<" "<<nithor.gpa<<endl;
    return 0;
}