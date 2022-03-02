class Solution {
public:
    string longestCommonPrefix(vector<string>& a) 
    {
        string ans = "";
        bool stop = false;
        int cnt = 0;
        
        
        if (a.size() == 0)
            return ans;
        if (a.size() == 1)
            return a[0];

        while (!stop)
        {
            for (int i = 0; i < a.size() - 1; i++)
            {
                if (a[i][cnt] == '\0' || a[i + 1][cnt] == '\0' || a[i][cnt] != a[i + 1][cnt])
                    stop = true;
            }
            if (!stop) 
                ans.push_back(a[0][cnt++]);
        }
        return ans;
    }
};