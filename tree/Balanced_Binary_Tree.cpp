int bal(TreeNode *root)
{
    if (!root)
        return 0;
    return 1 + max(bal(root->left), bal(root->right));
}

bool isBalanced(TreeNode *root)
{
    if (!root)
        return true;

    int leftHeight = bal(root->left);
    int rightHeight = bal(root->right);

    if (abs(leftHeight - rightHeight) > 1)
        return false;

    // Check if the left and right subtrees are balanced
    return isBalanced(root->left) && isBalanced(root->right);
}