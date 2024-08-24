int maxProfit(vector<int> &prices)
{
    int start = prices[0];
    int profit = 0;
    for (auto it : prices)
    {
        if (start < it)
            profit += it - start;
        start = it;
    }
    return profit;
}