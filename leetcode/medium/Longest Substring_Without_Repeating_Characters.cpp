class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        int left=0,right=0;
        
        unordered_map<char,int> mp;
        int ans=0;
        
        if(n==0)
        {
            return 0;
        }
        
        while(right<n)
        {
            char c=s[right];
            
            if(mp.find(c)!=mp.end())
            {
                 if(mp[c]+1>left)
                 {
                     left=mp[c]+1;
                 }
            }
            mp[c]=right;
            
            ans=max(ans,right-left+1);
            right++;
        }
        
        
        return ans;
    }
};