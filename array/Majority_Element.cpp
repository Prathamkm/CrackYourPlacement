class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 1;
        int ans = nums[0], s = nums.size() - 1;
        for (int i = 0; i < s; i++)
        {
            if (ans == nums[i + 1])
                count++;
            else
            {
                count--;
                if (count == 0)
                {
                    ans = nums[i];
                    count = 1;
                }
            }
        }
        return ans;
    }
};