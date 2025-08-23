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

void print_linked_list(Node *head) //O(n)
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

void delete_node(Node *head, int pos)  //O(n)
{
    Node *tmp =head;
    for(int i=0; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;  //30
    tmp->next = tmp->next->next;   //40
    delete deleteNode;  //delete 30

}

void delete_head(Node *&head)  //O(1)
{
    Node *newNode = head;
    head = head->next;
    delete newNode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    int pos;
    cin >> pos;
    if(pos >= size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_node(head,pos);
    }
    print_linked_list(head);
    return 0;
}
