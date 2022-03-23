class Solution {
public:
    int robHelper1(vector<int> &nums, int n, int t, vector<int> &memo) {
        if (t>=n-1) return 0;
        
        if(memo[t]!=-1) return memo[t];
        
        int ans;
        ans = max(nums[t]+robHelper1(nums, n, t+2, memo), robHelper1(nums, n, t+1, memo));
        
        return memo[t] = ans;
    }
    
    int robHelper2(vector<int> &nums, int n, int t, vector<int> &memo) {
        if (t>=n) return 0;
        
        if(memo[t]!=-1) return memo[t];
        
        int ans;
        ans = max(nums[t]+robHelper2(nums, n, t+2, memo), robHelper2(nums, n, t+1, memo));
        
        return memo[t] = ans;
    }
    
    int rob(vector<int>& nums) {
        int a1, a2, n;
        n = nums.size();
        
        if(n==1) return nums[0];
        
        vector<int> memo1(n+1, -1);
        vector<int> memo2(n+1, -1);
        
        a1 = robHelper1(nums, n, 0, memo1);
        a2 = robHelper2(nums, n, 1, memo2);
        
        return max(a1, a2);
    }
};