class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        int ans = 0, sum = 0;
        m[sum] = 1;
        for (auto &it : nums)
        {
            sum += it;
            if (m.find(sum - k) != m.end())
                ans += m[sum - k];
            m[sum]++;
        }
        return ans;
    }
};