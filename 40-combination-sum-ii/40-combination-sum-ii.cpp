class Solution {
public:
    vector<vector<int>> ans;
    void getSum(vector<int> &c, int target, vector<int> temp, int ind, int n) {
        if (target==0) {
            ans.push_back(temp);
            return;
        }
        
        for(int i = ind; i<n; i++) {
            if(i>ind && c[i]==c[i-1]) continue;
            if(c[i] > target) break;
            temp.push_back(c[i]);
            getSum(c, target-c[i], temp, i+1, n);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> t;
        getSum(candidates, target, t, 0, candidates.size());
        vector<vector<int>> s(ans.begin(), ans.end());
        return s;
    }
};