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
class myStack
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        sz++;

    }
    void pop()
    {
        if(head == NULL) return;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }  
    while(!st.empty()) 
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
