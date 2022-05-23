class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int n = nums.size(), k = s.size();
        set<int, greater<int> >::iterator itr;
        int i = 0;
        for (itr = s.begin(); itr != s.end(); itr++) {
           nums[i++] = *itr;
        }
        return k;
    }
};