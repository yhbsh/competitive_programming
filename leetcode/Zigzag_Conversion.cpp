class Solution {
public:
    string convert(string s, int r) {
        if (r == 1) {
            return s;
        }

        vector<string> rows(r);
        string ans;
        int cur = 0, fac = 1;

        for (int i = 0; i < s.length(); i++) {
            rows[cur].push_back(s[i]);
            cur += fac;
            if (cur == 0 || cur == r - 1)
                fac *= -1;
        }

        for (string str : rows)
            ans += str;

        return ans;
    }
};