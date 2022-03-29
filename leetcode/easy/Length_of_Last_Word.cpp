class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int cnt = 0, i = 0, k = 0;
        while (s[i] != '\0')
        {
            if (s[i] == ' ')
                cnt = 0;
            else
            {
                cnt++;
                k = cnt;
            }
            i++;
        }

        if (s[i - 1] == ' ')
            return k;
        else
            return cnt;
    }
};