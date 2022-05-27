class Solution {
public:
    vector<vector<int>> ans;
    void getSum(vector<int> &c, int target, vector<int> temp, int i, int n) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        
        if (i>=n){
            return;
        }
        
        if (target < 0) {
            return;
        }
        
        getSum(c, target, temp, i+1, n);

        if(c[i]<=target) {
            temp.push_back(c[i]);
            getSum(c, target-c[i], temp, i, n);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> t;
        getSum(candidates, target, t, 0, candidates.size());
        return ans;
    }
};