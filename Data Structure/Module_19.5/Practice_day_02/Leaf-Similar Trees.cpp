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
    vector<int> v1;
    vector<int> v2;
    void FirstTree(TreeNode* root1)
    {
        if(root1 == NULL) return ;
        if(root1->left == NULL && root1->right == NULL)
        {
            v1.push_back(root1->val);
        }
        FirstTree(root1->left);
        FirstTree(root1->right);
    }
    void SecondTree(TreeNode* root2)
    {
        if(root2 == NULL) return;
        if(root2->left == NULL && root2->right == NULL)
        {
            v2.push_back(root2->val);
        }
        SecondTree(root2->left);
        SecondTree(root2->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();
        v2.clear();
        FirstTree(root1);
        SecondTree(root2);
        if(v1 == v2)
        {
            return true;
        }
        else return false;
    }
};