class Solution {
public:
    int robHelper(vector<int>& nums, int n, vector<int> &memo) {
        if(n<=0) return 0;
        
        if(memo[n]!=-1) return memo[n];
        
        int ans;
        ans = max(nums[n-1]+robHelper(nums, n-2, memo), robHelper(nums, n-1, memo));
        
        return memo[n] = ans;
    }
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> memo(n+1, -1);
        int ans = robHelper(nums, n, memo);
        return ans;
    }
};