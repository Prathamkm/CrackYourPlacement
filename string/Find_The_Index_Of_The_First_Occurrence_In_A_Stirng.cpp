class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int ans = -1, j = 0, k;
        for (int i = 0; i < haystack.length(); i++)
        {
            if (haystack[i] == needle[0])
            {
                k = i;
                ans = i;
                j = 0;
                for (j = 0; k < haystack.length() && j < needle.length(); j++)
                {
                    if (haystack[k] != needle[j])
                        break;
                    k++;
                }
                if (j == needle.length())
                    return ans;
            }
        }
        return -1;
    }
};