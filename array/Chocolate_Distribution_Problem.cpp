class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int ans = 0, sum = 0, rem;
        unordered_map<int, int> m;
        m[0] = 1;
        for (auto it : nums)
        {
            sum += it;
            rem = (sum % k < 0) ? sum % k + k : sum % k;
            if (m.find(rem) != m.end())
                ans += m[rem];
            m[rem]++;
        }
        return ans;
    }
};