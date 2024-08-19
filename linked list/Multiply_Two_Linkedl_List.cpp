long long multiplyTwoLists(Node *first, Node *second)
{
    // code here
    long long a = 0, b = 0;
    int mod = 1000000007;
    while (first)
    {
        a = ((a * 10) % mod + (first->data) % mod) % mod;
        first = first->next;
    }
    while (second)
    {
        b = ((b * 10) % mod + (second->data) % mod) % mod;
        second = second->next;
    }
    return (a % mod * b % mod) % mod;
}