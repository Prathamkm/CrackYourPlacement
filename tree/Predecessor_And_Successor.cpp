void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    // Your code goes here
    Node *root1 = root;
    while (root1)
    {
        if (root1->key <= key)
        {
            root1 = root1->right;
        }
        else
        {
            suc = root1;
            root1 = root1->left;
        }
    }
    root1 = root;
    while (root1)
    {
        if (root1->key >= key)
        {
            root1 = root1->left;
        }
        else
        {
            pre = root1;
            root1 = root1->right;
        }
    }
}