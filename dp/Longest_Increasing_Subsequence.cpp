int solve(vector<int> &nums, int i, int prev, vector<vector<int>> &v)
{
    if (i == nums.size())
        return 0;
    if (v[i][prev + 1] != -1)
        return v[i][prev + 1];

    int take = 0;
    if (prev == -1 || nums[i] > nums[prev])
        take = 1 + solve(nums, i + 1, i, v);
    int dontTake = solve(nums, i + 1, prev, v);
    return v[i][prev + 1] = max(take, dontTake);
}

int lengthOfLIS(vector<int> &nums)
{
    vector<vector<int>> v(nums.size(), vector<int>(nums.size(), -1));
    return solve(nums, 0, -1, v);
}