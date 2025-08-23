/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/
void insert(TreeNode<int>* &root , int val)
{
    if(root == NULL)
    {
        root = new TreeNode<int>(val);
        return;
    }
    if(val < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new TreeNode<int>(val);
        }
        else
        {
            insert(root->left , val);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new TreeNode<int>(val);
        }
        else
        {
            insert(root->right , val);
        }
    }

}
TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    insert(root , val);
    return root;
}


