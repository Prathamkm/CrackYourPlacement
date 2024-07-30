class Solution
{

public:
    string reverseWords(string s)
    {
        vector<string> v;
        string s1, ans;
        int length = s.length();
        int j = length - 1;

        while (s[j] == ' ')
        {
            s.pop_back();
            j--;
        }

        while (s[0] == ' ')
            s.erase(s.begin());
        length = s.length();
        for (int i = 0; i < length; i++)
        {
            if (!(i > 0 && s[i - 1] == ' ' && s[i] == ' '))
                s1.push_back(s[i]);
            if (i == length - 1)
                s1.push_back(' ');
            if (s[i] == ' ' || i == length - 1)
            {
                v.insert(v.begin(), s1);
                s1 = "";
            }
        }
        for (auto &it : v)
        {
            ans += it;
        }
        ans.pop_back();
        return ans;
    }
};