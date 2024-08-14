void subset(vector<vector<int>> &ans, vector<int> v, vector<int> &nums, int index)
{
    if (index >= nums.size())
    {
        ans.push_back(v);
        return;
    }
    subset(ans, v, nums, index + 1);

    v.push_back(nums[index]);
    subset(ans, v, nums, index + 1);
}

public:
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> v;
    subset(ans, v, nums, 0);
    return ans;
}