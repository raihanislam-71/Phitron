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
void insert_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node *&head,int val)
{
    Node *newNode = new Node(val);
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
void delete_head(Node *&head)
{
    if (head == NULL) return;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_position(Node *head, int val)
{
    if (head == NULL || val <= 0) return;

    Node *tmp = head;

    for (int i = 1; i <= val - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL) return;

    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    delete deleteNode;
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
void print_node(Node *head)
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
    int t;
    cin >> t;
    while(t--)
    {
        int pos , val;
        cin >> pos >> val;
        if(pos == 0)
        {
            insert_head(head,val);
        }
        else if(pos == 1)
        {
            insert_tail(head,val);
        }
        else if(pos == 2 && val == 0)
        {
            delete_head(head);
        }
        else if(pos == 2)
        {
            delete_position(head,val);
        }
        print_node(head);
    }
    return 0;
}
