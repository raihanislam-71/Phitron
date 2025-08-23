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
void insert(Node *&head,Node *&tail,int val)
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

void palindrome(Node *head,Node *tail)
{
    Node *fast = head;
    Node *last = tail;
    bool flag = true;
    while(fast != last && fast->next != last)
    {
        if(fast->val != last->val)
        {
            flag = false;
            break;
        }
        fast = fast->next;
        last = last->prev;
    }
    if(fast->val != last->val)
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


