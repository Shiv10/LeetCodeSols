class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        
        ans.push_back(v);
        for(auto i: nums) {
            int n = ans.size();
            for(int j = 0; j < n; j++) {
                vector<int> temp = ans[j];
                temp.push_back(i);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};