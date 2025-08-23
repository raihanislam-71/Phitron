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
void insert(Node *&head, Node *&tail , int val)
{
    Node *newNode = new Node(val);
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
int main()
{
    int sizes[2];
    for(int i=0; i<=1; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while(true)
        {
            cin >> val;
            if(val == -1) break;
            insert(head,tail,val);
        }
        sizes[i] = size(head);
    }

    if(sizes[0] == sizes[1]) cout <<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
