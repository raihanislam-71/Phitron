#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Node *root)
{
    if(root == NULL)
    {
        cout<<"tree nai"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        //1. ber kore ana
        Node *f = q.front();
        q.pop();

        //2. jabotiyo ja kaj ache
        cout<<f->val<<" ";

        //3. tar childen gulo ke push koro
        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
        // or shortcat
        // if(f->left) q.push(f->left);
        // if(f->right) q.push(f->right);        
    }
}
Node* input_tree()
{
    
    int val;
    cin >> val;
    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        //1. ber kore ana
        Node * p = q.front();
        q.pop();

        //2. jabotiyo ja kaj ache
        int l , r;
        cin >> l >> r;

        Node* myLeft;
        Node* myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        //3.tar childern gulo ke push kora
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int main()
{
    Node * root = input_tree();
    levelOrder(root);
    return 0;
}
