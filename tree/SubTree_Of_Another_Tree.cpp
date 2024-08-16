bool check(TreeNode *root, TreeNode *subRoot)
{
    if (!root && !subRoot)
        return true;

    if (root && subRoot && root->val == subRoot->val)
    {
        return check(root->right, subRoot->right) && check(root->left, subRoot->left);
    }
    return false;
}
bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if (!subRoot)
        return true;
    if (!root)
        return false;
    if (check(root, subRoot))
        return true;
    return isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot);
}