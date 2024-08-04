class Solution
{
public:
    int ans(int n, vector<int> &v)
    {
        if (n == 0 || n == 1)
            return 1;
        if (v[n] != -1)
            return v[n];
        return v[n] = ans(n - 1, v) + ans(n - 2, v);
    }
    int climbStairs(int n)
    {
        vector<int> v(n + 1, -1);
        return ans(n, v);
    }
};