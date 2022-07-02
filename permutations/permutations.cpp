class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(vector<int> &nums, int n, int ind) {
        if (ind==n) {
            ans.push_back(nums);
        }
        
        for (int i = ind; i<n; i++) {
            swap(nums[ind], nums[i]);
            solve(nums, n, ind+1);
            swap(nums[ind], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, nums.size(), 0);
        return ans;
    }
};