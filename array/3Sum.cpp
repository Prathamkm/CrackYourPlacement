class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> m;
        vector<vector<int>> ans;
        set<vector<int>> s;
        bool b = false;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]] = i;
        }
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (b)
                break;
            if (nums[i] > 0)
                break;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] > 0)
                    break;
                if (nums[i] == 0 && nums[j] == 0 && j != nums.size() - 1 && nums[j + 1] == 0)
                {
                    vector<int> a;
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[m[(nums[i] + nums[j]) * -1]]);
                    s.insert(a);
                    b = true;
                    break;
                }
                if (m[(nums[i] + nums[j]) * -1] && m[(nums[i] + nums[j]) * -1] > i && m[(nums[i] + nums[j]) * -1] > j)
                {
                    vector<int> a;
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[m[(nums[i] + nums[j]) * -1]]);
                    s.insert(a);
                }
            }
        }
        for (auto it : s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};