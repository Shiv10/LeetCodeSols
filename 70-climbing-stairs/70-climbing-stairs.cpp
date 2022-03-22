class Solution {
public:
    int climbStairsHelps(int n, vector<int> &memo) {
        if (n==0)  return 1;
        
        if (n<0) return 0;
        
        if(memo[n]!=-1) return memo[n];
        
        int ans = climbStairsHelps(n-1, memo) + climbStairsHelps(n-2, memo);
        
        return memo[n] = ans;
    }
    
    int climbStairs(int n) {
        vector<int> memo(n+1, -1);
        int ans = climbStairsHelps(n, memo);
        return ans;
    }
};