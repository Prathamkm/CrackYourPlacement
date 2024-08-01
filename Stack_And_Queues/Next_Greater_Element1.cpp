class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> ans;
        unordered_map<int, int> m;
        stack<int> s;

        for (auto i : nums2)
        {
            while (!s.empty() && s.top() < i)
            {
                m[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        for (auto i : nums1)
        {
            if (m.find(i) != m.end())
                ans.push_back(m[i]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};