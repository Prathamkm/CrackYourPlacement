class Solution
{
public:
    int ans(vector<int> &coins, int amount, int i, vector<vector<int>> &memo)
    {
        if (amount == 0)
            return 0; // Base case: If amount is 0, no coins are needed.
        if (i == coins.size())
            return INT_MAX; // No coins left to use.
        if (amount < 0)
            return INT_MAX; // Invalid case where the amount is negative.

        // If already computed, return the result from memo
        if (memo[amount][i] != -1)
            return memo[amount][i];

        // Option 1: Do not take the ith coin.
        int notTake = ans(coins, amount, i + 1, memo);

        // Option 2: Take the ith coin (only if it does not make the amount negative).
        int take = INT_MAX;
        if (amount >= coins[i])
        {
            int result = ans(coins, amount - coins[i], i, memo);
            if (result != INT_MAX)
            {
                take = result + 1; // Add 1 to account for taking this coin.
            }
        }

        // Store the result in memo and return the minimum of both options.
        return memo[amount][i] = min(take, notTake);
    }

    int coinChange(vector<int> &coins, int amount)
    {
        vector<vector<int>> memo(amount + 1, vector<int>(coins.size(), -1)); // Initialize memoization table.
        int result = ans(coins, amount, 0, memo);                            // Start from the first coin.
        return result == INT_MAX ? -1 : result;                              // If result is INT_MAX, return -1 indicating no solution.
    }
};