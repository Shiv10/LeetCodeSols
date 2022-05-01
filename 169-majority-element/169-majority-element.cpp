class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> v;
        if (nums.size()==1) return nums[0];
        int n = nums.size()/2;
        for(auto x: nums) {
            if (v.find(x) == v.end()) {
                v[x] = 1;
            } else {
                v[x] += 1;
                if (v[x]>n) return x;
            }
        }
        return -1;
    }
};