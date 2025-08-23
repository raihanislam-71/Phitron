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

int count_node(Node *head)
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

void print_mid(Node *head)
{
    int cnt = count_node(head);
    Node *tmp = head;
    for(int i=0; i<cnt; i++)
    {
        if(cnt%2==0 && i==cnt/3 || i==cnt/2)
        {
            cout<<tmp->val<<" ";
        }
        else
        {
            if(i == cnt/2)
            {
                cout<<tmp->val<<endl;
            }
        }
        tmp = tmp->next;
    }
}

int main()
{
    Node *head= NULL;
    Node *tail= NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        Insert_node(head,tail,val);
    }

    print_mid(head);
    return 0;
}
