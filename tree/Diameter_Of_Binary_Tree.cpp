class Solution
{
public:
    int h(TreeNode *root)
    {

        if (root == NULL)
            return 0;

        return 1 + max(h(root->left), h(root->right));
    }

    int maxi = 0;
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int sum = h(root->left) + h(root->right);
        // int maxi =0;
        maxi = max(sum, maxi);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxi;
    }
};