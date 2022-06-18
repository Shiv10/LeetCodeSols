class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.begin(), nums.end());
        int i, n = nums.size();
        
        for(i=0; i<n; i++) {
            nums[(i+k)%n] = ans[i];
        }
    }
};