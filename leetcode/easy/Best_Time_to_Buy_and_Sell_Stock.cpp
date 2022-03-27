class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n = a.size();
        
        int ans = 0;
        int min_so_far = 10005;
        
        for(int i = 1; i < n; i++) {
            min_so_far = min(min_so_far, a[i - 1]);
            ans = max(ans, a[i] - min_so_far);
        }
        return ans;
    }
    
};


