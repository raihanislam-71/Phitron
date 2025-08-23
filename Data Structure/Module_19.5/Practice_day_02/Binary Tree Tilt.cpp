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
    int totaltilt = 0;
    int sum(TreeNode* root)
    {
        if(root == NULL) return 0;
        int sumL = sum(root->left);
        int sumR = sum(root->right);
        int tilt = abs(sumL - sumR);
        totaltilt += tilt;
        return sumL + sumR + root->val;
    }
    int findTilt(TreeNode* root) {
        totaltilt = 0;
        sum(root);
        return totaltilt;
    }
};