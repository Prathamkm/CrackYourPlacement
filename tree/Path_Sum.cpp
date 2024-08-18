bool hasPathSum(TreeNode *root, int targetSum)
{
    if (!root)
        return false;

    // If it's a leaf node, check if the remaining targetSum equals the node's value.
    if (!root->left && !root->right)
        return (targetSum == root->val);

    // Recur down to the left and right subtrees with the adjusted targetSum.
    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
}