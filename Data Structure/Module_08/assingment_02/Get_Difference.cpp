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

void Insert_node(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int  maximum_print(Node *head)
{
    int max = INT_MIN;
    for(Node *i = head; i != NULL; i = i->next)
    {
        if(i->val > max)
        {
            max = i->val;
        }
    }
    return max;
}

int minmun_print(Node *head)
{
    int min = INT_MAX;
    for(Node *i = head; i != NULL; i = i->next)
    {
        if(min > i->val)
        {
            min = i->val;
        }
    }
    return min;
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
        Insert_node(head,tail,val);
    }
    
    cout<<maximum_print(head) - minmun_print(head)<<endl;
    
    return 0;
}
