class Solution {
public:
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