void paths(TreeNode *root, vector<string> &ans, string s)
{
    if (!root)
        return;
    if (s == "")
        s += to_string(root->val);
    else
        s += "->" + to_string(root->val);
    if (!root->left && !root->right)
        ans.push_back(s);
    paths(root->left, ans, s);
    paths(root->right, ans, s);
}
vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> ans;
    paths(root, ans, "");
    return ans;
}