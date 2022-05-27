class Solution {
public:
    set <vector<int>> s;
    void getSubsets(vector<int> &nums, vector<int> temp, int ind, int n) {
        if (ind>=n) {
            s.insert(temp);
            return;
        }
        
        getSubsets(nums, temp, ind+1, n);
        temp.push_back(nums[ind]);
        getSubsets(nums, temp, ind+1, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        getSubsets(nums, temp, 0, nums.size());
        vector<vector<int>> t(s.begin(), s.end());        
        return t;
    }
};