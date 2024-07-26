class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int count = 0;
        int maxi = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            count += prices[i + 1] - prices[i];
            if (count < 0)
                count = 0;
            maxi = max(maxi, count);
        }
        return maxi;
    }
};