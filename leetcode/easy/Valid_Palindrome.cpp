#include <string>
class Solution
{
public:
    bool isPalindrome(string in)
    {
        string s;
        for (int i = 0; i < in.length(); i++)
            if ((in[i] >= 48 && in[i] <= 57) || (in[i] >= 65 && in[i] <= 90) || (in[i] >= 97 && in[i] <= 122))
                s.push_back(tolower(in[i]));

        int n = s.length();

        for (int i = 0; i < n / 2; i++)
            if (s[i] != s[n - i - 1])
                return false;
        return true;
    }
};