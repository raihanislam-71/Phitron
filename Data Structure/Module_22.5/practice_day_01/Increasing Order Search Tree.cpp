/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* newRoot = NULL;
    TreeNode* lastNode = NULL;

    void setvalue(){

    }

    void inorder(TreeNode* root)
    {
        if(root == NULL) return;
        
        inorder(root->left);

        TreeNode* cur = new TreeNode(root->val);
        if(newRoot == NULL)
        {
            newRoot = cur;
            lastNode = cur;
        }
        else
        {        
            lastNode->right = cur;
            lastNode = lastNode->right;
        } 
        inorder(root->right);
    }


    TreeNode* increasingBST(TreeNode* root) {      
        inorder(root);
        return newRoot;      
    }
};