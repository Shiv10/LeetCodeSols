class Solution {
public:
    int helper(string a, string b, int i, int j, vector<vector<int>>& memo) {
        if (i>a.length()-1 or j>b.length()-1) return 0;
        
        if (memo[i][j]!=-1) return memo[i][j];
        
        int count = 0;
        
        if (a[i]==b[j]) {
            count = 1 + helper(a, b, i+1, j+1, memo);
        } else {
            count = max(helper(a, b, i+1, j, memo), helper(a, b, i, j+1, memo));
        }
        return memo[i][j] = count;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n, m;
        n = text1.length();
        m = text2.length();
        vector<vector<int>> memo(n+1, vector<int>(m+1, 0));
        int ans =0;
        int i, j;
        for (i=1;i<=n;i++){
            for (j=1;j<=m;j++){
                if (text1[i-1]==text2[j-1]) {
                    memo[i][j] = memo[i-1][j-1]+1;
                } else {
                    memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
                }
                
                ans = max(ans, memo[i][j]);
            }
        }
        
        return ans;
    }
};