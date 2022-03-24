class Solution {
public:
    bool canJumpHelper(vector<int>& nums, int t, int n, vector<int> &memo) {
        if(t>=n-1) {
            return true;
        }
        
        if(memo[t]!=-1) {
            if(memo[t]==1) return true;
            else return false;
        }
        
        bool ans = false;
        
        for(int i=1;i<=nums[t];i++) {
            ans = canJumpHelper(nums, t+i, n, memo);
            if(ans){
                memo[t] = 1;
                return ans;
            }
        }
        
        memo[t] = 0;
        return ans;
    }
    
    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size()+1, -1);
        bool ans = canJumpHelper(nums, 0, nums.size(), memo);
        return ans;
    }
};