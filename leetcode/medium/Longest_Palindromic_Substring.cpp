#include <string>
class Solution
{
public:
    string go(int i, int j, string s)
    {
        int n = s.length();
        while (i >= 0 && j < n && s[i] == s[j])
        {
            i--;
            j++;
        }

        string ans = "";

        for (int k = i + 1; k < j; k++)
            ans += s[k];

        return ans;
    }

    string longestPalindrome(string s)
    {

        string ans = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            string a = go(i, i, s);
            string b = go(i, i + 1, s);
            if (ans.length() < a.length())
                ans = a;
            if (ans.length() < b.length())
                ans = b;
        }

        return ans;
    }
};
