class Solution
{
public:
    bool isDead(Node *root, int l, int r)
    {
        // Base case: if the node is NULL, return false
        if (!root)
            return false;

        // Check if the current node is a leaf node and its value makes a dead end
        if (!root->left && !root->right)
        {
            if (l == r)
                return true;
            else
                return false;
        }

        // Recur for left and right subtrees
        return isDead(root->left, l, root->data - 1) ||
               isDead(root->right, root->data + 1, r);
    }

    bool isDeadEnd(Node *root)
    {
        // Start with the range of possible node values
        return isDead(root, 1, 100000);
    }