#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student *raihan = new Student(41,4 ,4.04);

    cout << raihan->roll <<" "<< raihan->cls <<" "<< raihan->gpa <<endl;
    return 0;
}