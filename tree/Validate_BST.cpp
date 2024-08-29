bool isValidBSTHelper(TreeNode *root, long long minVal, long long maxVal)
{
    if (!root)
        return true;

    // Check the current node's value against the allowed range
    if (root->val <= minVal || root->val >= maxVal)
        return false;

    // Recursively check left and right subtrees with updated ranges
    return isValidBSTHelper(root->left, minVal, root->val) &&
           isValidBSTHelper(root->right, root->val, maxVal);
}

bool isValidBST(TreeNode *root)
{
    // Initialize the range with the full range of possible values
    return isValidBSTHelper(root, LLONG_MIN, LLONG_MAX);
}