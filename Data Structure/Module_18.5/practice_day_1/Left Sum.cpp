#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	long long sum = 0;
    if(root == NULL) return sum;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        BinaryTreeNode<int>* p = q.front();
        q.pop();

        if(p->left) sum+=p->left->data;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
	return sum;
}