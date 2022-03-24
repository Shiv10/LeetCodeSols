class Solution {
public:
    int jumpHelper(vector<int> nums, int t, int n, vector<int> &memo) {
        if(t>=n-1) return 0;
        
        if(memo[t]!=-1) return memo[t];
        
        int ans = INT_MAX;
        
        for(int i = 1; i<=nums[t]; i++) {
            int temp;
            temp = jumpHelper(nums, t+i, n, memo);
            if(temp!=INT_MAX) 
                ans = min(ans, 1 + temp);
        }
        
        return memo[t] = ans;
    }
    
    int jump(vector<int>& nums) {
        int n , ans;
        n = nums.size();
        vector<int> dp(n, -1);
        
        dp[n-1] = 0;
        
        int i, j, mn;
        for(i=n-2;i>-1;i--) {
            mn = INT_MAX;
            for(j=1; j<=nums[i] && i+j<n; j++) {
                if(dp[i+j]!=-1) {
                    mn = min(mn, dp[i+j]);
                }
            }
            
            if(mn!=INT_MAX) {
                dp[i] = mn+1;
            }
        }
        return dp[0];
    }
};