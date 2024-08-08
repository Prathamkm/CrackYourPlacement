class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int num = nums[(nums.size() - 1) / 2];
        int ans = 0;
        for (auto &it : nums)
            ans += abs(it - num);
        return ans;
    }
};