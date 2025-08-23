int sum(Node* root)
{
    if (root == NULL) return 0;

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);

    return leftSum + rightSum + root->val;
}
