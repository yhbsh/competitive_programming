class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int n = nums.size();
        int best = INT_MIN, sum = 0;
        
        for (int i = 0; i < n; i++)
        {
            sum = max(nums[i], nums[i] + sum);
            best = max(best, sum);
        }
        
        return best;
    }
};