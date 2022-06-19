class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> val;
        map<int, int> index;
        int diff;
        for (int i = 0; i<nums.size(); i++) {
            diff = target - nums[i];
            if (val[diff]!=0) {
                ans.push_back(index[diff]);
                ans.push_back(i);
                return ans;
            }
            
            val[nums[i]]++;
            index[nums[i]] = i;
        }
        return ans;
    }
};