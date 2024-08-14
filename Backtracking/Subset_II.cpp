void subset(set<vector<int>> &ans, vector<int> v, vector<int> &nums, int index)
{
    if (index >= nums.size())
    {
        ans.insert(v);
        return;
    }
    subset(ans, v, nums, index + 1);

    v.push_back(nums[index]);
    subset(ans, v, nums, index + 1);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    set<vector<int>> ans;
    vector<int> v;
    subset(ans, v, nums, 0);
    vector<vector<int>> a;
    for (auto &it : ans)
        a.push_back(it);
    return a;
}