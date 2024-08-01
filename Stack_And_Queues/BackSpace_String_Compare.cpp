class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> a;
        stack<char> b;
        for (auto i : s)
        {
            if (i != '#')
                a.push(i);
            else if (!a.empty())
                a.pop();
        }
        for (auto i : t)
        {
            if (i != '#')
                b.push(i);
            else if (!b.empty())
                b.pop();
        }
        return a == b;
    }
};