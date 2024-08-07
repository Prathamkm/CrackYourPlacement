class Solution
{
public:
    int ans(int m, int n, int a, int b, vector<vector<int>> &dp)
    {
        if (a == m - 1 && b == n - 1)
            return 1;
        if (a >= m || b >= n)
            return 0;
        if (dp[a][b] != 0)
            return dp[a][b];
        return dp[a][b] = ans(m, n, a + 1, b, dp) + ans(m, n, a, b + 1, dp);
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        return ans(m, n, 0, 0, dp);
    }
};