class Solution {
public:
    int romanToInt(string s)
    {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                if (s[i + 1] == 'V')
                    ans += 4;
                if (s[i + 1] == 'X')
                    ans += 9;
                i++;
            }
            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                if (s[i + 1] == 'L')
                    ans += 40;
                if (s[i + 1] == 'C')
                    ans += 90;
                i++;
            }
            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                if (s[i + 1] == 'D')
                    ans += 400;
                if (s[i + 1] == 'M')
                    ans += 900;
                i++;
            }
            else
            {
                if (s[i] == 'I')
                    ans += 1;
                else if (s[i] == 'V')
                    ans += 5;
                else if (s[i] == 'X')
                    ans += 10;
                else if (s[i] == 'L')
                    ans += 50;
                else if (s[i] == 'C')
                    ans += 100;
                else if (s[i] == 'D')
                    ans += 500;
                else if (s[i] == 'M')
                    ans += 1000;
            }
        }

        if (n > 1)
        {
            if (s[n - 1] == 'I')
                ans += 1;
            else if (s[n - 1] == 'V' && s[n - 2] != 'I')
                ans += 5;
            else if (s[n - 1] == 'X' && s[n - 2] != 'I')
                ans += 10;
            else if (s[n - 1] == 'L' && s[n - 2] != 'X')
                ans += 50;
            else if (s[n - 1] == 'C' && s[n - 2] != 'X')
                ans += 100;
            else if (s[n - 1] == 'D' && s[n - 2] != 'C')
                ans += 500;
            else if (s[n - 1] == 'M' && s[n - 2] != 'C')
                ans += 1000;
        }
        else
        {
            if (s[0] == 'I')
                ans += 1;
            else if (s[0] == 'V')
                ans += 5;
            else if (s[0] == 'X')
                ans += 10;
            else if (s[0] == 'L')
                ans += 50;
            else if (s[0] == 'C')
                ans += 100;
            else if (s[0] == 'D')
                ans += 500;
            else if (s[0] == 'M')
                ans += 1000;
        }
        return ans;
    }
};