class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        
        int ans = 0;
        for(auto x: nums) {
            int len = 1;
            if (st.find(x-1)==st.end()) {
                while(st.find(x+len)!=st.end()) {
                    len++;
                }
            }
            ans = max(ans, len);
        }
        return ans;
    }
};