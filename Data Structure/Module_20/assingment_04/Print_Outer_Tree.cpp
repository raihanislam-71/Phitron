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


vector<int> v;

Node* input_tree()
{
    int val;
    cin >>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<pair<Node*,int>> q;
    if(root) q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int> pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();

        int l , r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1 ) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        node->left = myLeft;
        node->right = myRight;

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    return root;
}

void Left_Node(Node* root)
{
    if (root == NULL) return;
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){

        Node* node = q.front();
        q.pop();

        v.push_back(node->val);

        if(node->left != NULL){
            q.push(node->left);
        }
        else if(node->right!=NULL){
            q.push(node->right);
        }
    }
    reverse(v.begin(),v.end());
}
void Right_Node(Node* root)
{
    if (root == NULL) return;
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){

        Node* node = q.front();
        q.pop();

        v.push_back(node->val);

        if(node->right!=NULL){
            q.push(node->right);
        }
        else if(node->left != NULL){
           q.push(node->left);
        }
    }
}
int main()
{
    Node * root = input_tree();
    v.clear();
    
    Left_Node(root->left);
    v.push_back(root->val);
    Right_Node(root->right);
    
    for(int c : v)
    {
        cout<<c<<" ";
    }
    return 0;
}

