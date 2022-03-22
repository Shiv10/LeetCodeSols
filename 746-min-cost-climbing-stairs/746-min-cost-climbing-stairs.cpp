class Solution {
public:
    
    int minCostHelper(vector<int>& cost, int curr, int n, vector<int> &memo) {
        if(curr>=n) return 0;
        
        if(memo[curr]!=-1) return memo[curr];
        
        int minCost = INT_MAX;
        
        minCost = cost[curr] + min({ minCostHelper(cost, curr+1, n, memo), minCostHelper(cost, curr+2, n, memo) });
        
        return memo[curr] = minCost;
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int a1, a2, n;
        n = cost.size();
        
        vector<int> memo(n+1, -1);
        
        a1 = minCostHelper(cost, 0, n, memo);
        a2 = minCostHelper(cost, 1, n, memo);
        
        return min(a1, a2);
    }
};