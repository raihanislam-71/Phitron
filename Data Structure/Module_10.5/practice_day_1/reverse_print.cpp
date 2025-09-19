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
void insert(Node *&head,Node *&tail,int val)
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
//1
// void print_reverse(Node *tail)
// {
//     Node *tmp = tail;
//     while(tmp != NULL)
//     {
//         cout << tmp->val <<" ";
//         tmp = tmp->prev;
//     }
//     cout<<endl;
// }

//2
// void print_reverse(Node *head, Node *tail)
// {
//     Node *i = head;
//     Node *j = tail;
//     while(i != j && i->prev != j)
//     {
//         swap(i->val,j->val);
//         i = i->next;
//         j = j->prev;
//     }
// }

//3
void print_reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while(i != j && i->next != j)
    {
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
}

void print(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(cin >> val && val != -1)
    {
        insert(head,tail,val);
    }
    //1
    // print(head,tail);
    
    //2
    print_reverse(head,tail);
    print(head);
    return 0;
}
