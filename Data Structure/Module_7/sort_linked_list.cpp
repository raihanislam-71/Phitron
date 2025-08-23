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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_tail(head,tail,val);
    }

    for(Node* i=head; i->next != NULL; i=i->next)  //O(n^2)
    {
        for(Node* j=i->next; j != NULL; j=j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print_linked_list(head);
    return 0;
}
