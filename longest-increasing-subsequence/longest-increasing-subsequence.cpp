class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n, i, k, j;
        n = nums.size();
        vector<int> dp(n, 1);
        
        for (i=1;i<n;i++) {
            for (j=0;j<i; j++) {
                if (nums[i]>nums[j]) {
                    if (dp[i] < dp[j]+1) {
                        dp[i] = dp[j]+1;
                    }
                }
            }
        }
        
        int m = dp[0];
        for (auto x: dp){
            if (x>m) m = x;
        }
        
        return m;
    }
};