#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)  //O(n)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node *head)  //O(n)
{
    Node *tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
 
void insert(Node *head, int pos, int val)  //O(n)
{
    Node * newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_head(Node *&head,int val)  //O(1)
{
    Node * newNode =new Node(val);
    newNode->next = head;
    head = newNode;       
}

void insert_tail(Node *&head,Node *& tail, int val)  //O(1)
{
    Node *newNode =new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode; // insert tail
    tail = newNode;       //update tail
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;


    print_linked_list(head);
    int pos,val;
    cin >> pos >> val;
    if(pos > size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos == 0)
    {
        insert_head(head,val);
    }
    else if(pos == size(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert(head,pos,val);
    }
    print_linked_list(head);
    return 0;
}
