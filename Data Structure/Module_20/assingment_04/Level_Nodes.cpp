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
int frq[1000] = {};
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

void level_print(Node* root,int n)
{
    if (root == NULL) {
        cout << "Invalid" << endl;
        return;
    }
    queue<pair<Node*,int>> q;
    if(root) q.push({root,0});
    bool flag = false;
    while(!q.empty())
    {
        pair<Node*,int> pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();

        if(level == n)
        {
            cout<<node->val<<" ";
            flag = true;
        }

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    if(!flag) cout<<"Invalid"<<endl; 
}


int main()
{
    Node* root = input_tree();
    int n;
    cin >> n;
    level_print(root , n);

    return 0;
}
