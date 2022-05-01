class Solution {
public:
    int helper(int m, int n, int x, int y, vector<vector<int>> &memo) {
        if(x==m && y==n) return 1;
        
        if(memo[x][y]!=-1) return memo[x][y];
        
        int ans=0;
        if (x<m) {
            ans += helper(m, n, x+1, y, memo);
        }
        
        if (y<n) {
            ans += helper(m, n, x, y+1, memo);
        }
        
        return memo[x][y] = ans;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m+1, vector<int>(n+1, -1));
        int ans = helper(m,n,1,1, memo);
        return ans;
    }
};