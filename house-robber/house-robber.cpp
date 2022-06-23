class Solution {
public:
    int rob(vector<int>& nums) {
        int i, n;
        n = nums.size();
        vector<int> memo(n+1);
        
        memo[0] = 0;
        memo[1] = nums[0];
        
        for (i = 1; i<n; i++) {
            memo[i+1] = max(memo[i], memo[i-1] + nums[i]);
        }
        
        return memo[n];
    }
};