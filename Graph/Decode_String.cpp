void dfs(string &s, string &ans, int &i)
{
    while (i < s.length() && s[i] != ']')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            ans += s[i];
            i++;
        }
        else if (s[i] >= '1' && s[i] <= '9')
        {
            int num = 0;
            // Build the number
            while (i < s.length() && s[i] >= '0' && s[i] <= '9')
            {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i++; // Skip the opening '['
            string temp = "";
            dfs(s, temp, i); // Decode the string inside the brackets
            i++;             // Skip the closing ']'
            while (num--)
            {
                ans += temp; // Append the decoded string num times
            }
        }
    }
}

string decodeString(string s)
{
    string ans = "";
    int i = 0;
    dfs(s, ans, i);
    return ans;
}