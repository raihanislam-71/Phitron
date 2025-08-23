#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

//// 1
bool cmp(Student a ,Student b)
{
    if(a.marks == b.marks)   
    {
        return a.roll < b.roll;   // jodi B theke A soto hoi ta hole return true na hile false
    }
    else
    {
        return a.marks > b.marks; // jodi B theke A voro hoi ta hole return true na hole false
    }
}

////2
// bool cmp(Student a, Student b)   
// { 
//     if (a.marks < b.marks)          // যদি প্রথম অবজেক্টের মার্ক্স ছোট হয় তাহলে অর্ডার ঠিক আছে, এখানে সর্ট করার প্রয়োজন নেই। যেহেতু আমরা ছোট থেকে বড় সর্ট করছি।
//         return true;                // এখানে সর্ট করার প্রয়োজন নেই, তাই ট্রু রিটার্ন করা হচ্ছে।
//     else if(a.marks > b.marks)      // যদি প্রথম অবজেক্টের মার্ক্স বড় হয় তাহলে অর্ডার ঠিক নেই, এখানে সর্ট করতে হবে।                  
//         return false;               // সর্ট করতে হবে, তাই ফলস রিটার্ন করা হচ্ছে।
//     else                            // আর যদি প্রথম এবং দ্বিতীয় অবজেক্ট এর মার্ক্স সমান হয়, তাহলে আমাদের রোল চেক করে দেখতে হবে।
//     {
//         if (a.roll < b.roll)        // যদি প্রথম অবজেক্টের রোল ছোট হয় তাহলে অর্ডার ঠিক আছে, এখানে সর্ট করার প্রয়োজন নেই। যেহেতু আমরা ছোট থেকে বড় সর্ট করছি।
//             return true;            // এখানে সর্ট করার প্রয়োজন নেই, তাই ট্রু রিটার্ন করা হচ্ছে।   
//         else                        // নাহলে সর্ট করতে হবে।
//             return false;           // তাই ফলস রিটার্ন করা হচ্ছে।  
//     }        
// }

// // 3 sodo marks sort function
// bool cmp(Student a, Student b)      // কাস্টম কম্পেয়ার ফাংশন যা বুলিয়ান টাইপের এবং প্যারামিটার হিসেবে দুটি অবজেক্ট নিবে।
// {
//     if (a.marks <= b.marks)       // যদি প্রথম অবজেক্টের মার্ক্স ছোট অথবা সমান হয় তাহলে অর্ডার ঠিক আছে, এখানে সর্ট করার প্রয়োজন নেই। যেহেতু আমরা ছোট থেকে বড় সর্ট করছি।
//         return true;              // এখানে সর্ট করার প্রয়োজন নেই, তাই ট্রু রিটার্ন করা হচ্ছে। 
//     else                          // নাহলে সর্ট করতে হবে।
//         return false;             // তাই ফলস রিটার্ন করা হচ্ছে।
// }
int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}

//input 
// 5
// raihan 10 90
// romjan 13 90
// nithor 11 90
// saruar 12 95
// farhan 9 80