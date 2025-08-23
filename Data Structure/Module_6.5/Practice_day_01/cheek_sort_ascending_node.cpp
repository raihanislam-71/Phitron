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
void Insert_node(Node *&head , int v)
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
void duplicate_node(Node *head)
{
    Node *first = head;
    bool flag = true;
    while(first != NULL && first->next != NULL)
    {
        if(first->val > first->next->val)
        {
            flag = false;
            break;
        }
        first = first->next;
    }
    if(flag) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
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
    duplicate_node(head);
    return 0;
}