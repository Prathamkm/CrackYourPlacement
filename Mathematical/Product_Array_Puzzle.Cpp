class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums)
    {

        // code here
        vector<long long> ans(nums.size(), 0);
        long long pro = 1;
        int cz = 0;
        for (auto it : nums)
        {
            pro *= it;
            if (!it)
                cz++;
        }
        if (cz > 1)
            return ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!nums[i])
            {
                long long p = 1;
                for (auto it : nums)
                    if (it)
                        p *= it;
                ans[i] = p;
            }
            else
                ans[i] = pro / nums[i];
        }
        return ans;
    }
};