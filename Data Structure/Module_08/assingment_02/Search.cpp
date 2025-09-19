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
int size(Node *head)
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
void Search_node(Node *head,int q)
{
    bool flag = false;
    int s = size(head);
    int i=0;
    for(int i=0; i<s; i++)
    {
        if(head->val == q)
        {
            cout << i <<endl;
            flag = true;
            break;
        }
        head = head->next;
    }
    if(flag == false) cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        int q;
        while(true)
        {
            cin >> val;
            if(val == -1) break;
            Insert_node(head,tail,val);
        }
        cin >> q;
        Search_node(head,q);
    }
    return 0;
}
