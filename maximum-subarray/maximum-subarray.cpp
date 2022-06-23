class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        bool f = false;
        int ans, maxe = nums[0], sum, i;
        ans = sum = 0;
        
        for (auto x: nums) {
            sum += x;
            
            if (x>=0) f = true;
            
            if (maxe < x) maxe = x;
            
            ans = max(sum, ans);
            
            if (sum < 0 ) sum = 0;
        }
        
        if (!f) return maxe;
        
        return ans;
    }
};