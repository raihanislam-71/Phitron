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

void palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = true;
    while(i != j && i->next != j) //10 20 (30 40) 20 10 
    {
        if(i->val != j->val)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val)  // 30 40
    {
        flag = false;
    }
    if(flag == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

    palindrome(head,tail);
    
    return 0;
}
