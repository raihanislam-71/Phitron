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
void insert(Node *&head,Node *&tail, int val)
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

void sort_ascending(Node *head, Node *tail)
{
    for(Node *i=head; i->next != NULL; i = i->next)
    {
        for(Node *j=i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
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

    sort_ascending(head,tail);
    print(head);
    return 0;
}
