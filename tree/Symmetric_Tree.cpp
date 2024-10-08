class Solution
{
public:
    bool ans(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 && !root2)
            return true;
        if (!root1 || !root2)
            return false;
        if (root1->val != root2->val)
            return false;

        return ans(root1->right, root2->left) && ans(root1->left, root2->right);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        return ans(root->right, root->left);
    }
};