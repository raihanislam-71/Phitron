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
void Insert_node(Node *&head,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

    Node *print = head;
    while(print != NULL)
    {
        cout<<print->val<<" ";
        print = print->next;
    }
    cout<<endl;
}

void Insert_head(Node *&head,int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;

    Node *print = head;
    while(print != NULL)
    {
        cout<<print->val<<" ";
        print = print->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        Insert_node(head,val);
    }
    
    int q;
    cin >> q;
    while(q--)
    {
        int pos , n;
        cin >> pos >> n;
        if(pos == 0)
        {
            Insert_head(head,n);
        }
        else
        {
            insert_at_position(head,pos,n);
        }
    }
    return 0;
}
