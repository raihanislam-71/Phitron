#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;

}

bool cmp(Node *head1,Node *head2)
{
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return(head1 == NULL && head2 == NULL);
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while(true)
    {
        cin >> val1;
        if(val1 == -1) break;
        insert(head1,tail1,val1);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2 ;
    while(true)
    {
        cin >> val2;
        if(val2 == -1) break;
        insert(head2,tail2,val2);
    }

    if(cmp(head1,head2) == true) cout <<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

//Use list
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> mylist1;
//     int val1;
//     while(true)
//     {
//         cin >> val1;
//         if(val1 == -1) break;
//         mylist1.push_back(val1);
//     }

//     list<int> mylist2;
//     int val2;
//     while(true)
//     {
//         cin >> val2;
//         if(val2 == -1) break;
//         mylist2.push_back(val2);
//     }
    
//     if(mylist1.size()==mylist2.size() && equal(mylist1.begin(),mylist1.end(),mylist2.begin()))
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }

