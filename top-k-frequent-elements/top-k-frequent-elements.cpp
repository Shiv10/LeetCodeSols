class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<int> ans;
        int n;
        n = nums.size();
        vector<vector<int>> freq(n+1);
        for (auto x: nums) {
            m[x]++;
        }
        
        for (auto &pairs: m) {
            freq[m[pairs.first]].push_back(pairs.first);
        }
        
        for (int i = n; i>0; i--) {
            if (k>0) { 
                for (auto x: freq[i]) {
                    if (k>0) {
                        ans.push_back(x);
                        k--;
                    } else {
                        return ans;
                    }
                }
            } else break;
        }
        
        return ans;
    }
};