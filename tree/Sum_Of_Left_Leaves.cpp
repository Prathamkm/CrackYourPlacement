class Solution
{
public:
    int sum = 0;
    void ans(TreeNode *root, bool f)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL && f == 1)
        {

            sum += root->val;
            return;
        }
        ans(root->left, 1);
        ans(root->right, 0);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        ans(root, 0);
        return sum;
    }
};