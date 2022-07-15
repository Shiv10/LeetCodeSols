class Solution {
public:
    int solve(vector<int> &cost, int i, vector<int> &memo) {
        if (i>cost.size()-1) {
            return 0;
        }
        
        if(memo[i]!=-1) return memo[i];
        
        int ans = 0;
        ans = cost[i] + min(solve(cost, i+1, memo), solve(cost, i+2, memo));
        
        return memo[i] = ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> memo(n, -1);
        int ans = min(solve(cost, 0, memo), solve(cost, 1, memo));
        return ans;
    }
};