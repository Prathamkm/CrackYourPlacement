bool isPalindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void ans(string s, int idx, vector<vector<string>> &v, vector<string> curr)
{
    if (idx == s.length())
    {
        v.push_back(curr);
        return;
    }

    for (int i = idx; i < s.length(); i++)
    {
        if (isPalindrome(s, idx, i))
        {
            curr.push_back(s.substr(idx, i - idx + 1));
            ans(s, i + 1, v, curr);
            curr.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> v;
    vector<string> curr;
    ans(s, 0, v, curr);
    return v;
}