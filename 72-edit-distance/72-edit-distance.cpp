class Solution {
public:
    int help(string s, string w, int i, int j, int n, int m, vector<vector<int>> &memo) {
        if (i==n or j==m) {
            return (n-i)+(m-j);
        }
        
        if (memo[i][j]!=-1) {
            return memo[i][j];
        }
        
        int ans = INT_MAX;
        
        if (s[i]==w[j]) {
            ans = min(ans, help(s, w, i+1, j+1, n, m, memo));
        } else {
            ans = 1 + min({ans, help(s, w, i+1, j, n, m, memo), help(s, w, i, j+1, n, m, memo), help(s, w, i+1, j+1, n, m, memo)});
        }
        
        return memo[i][j] = ans;
    }
    int minDistance(string word1, string word2) {
        int n, m;
        n = word1.length();
        m = word2.length();
        vector<vector<int>> memo(n, vector<int>(m, -1));
        int ans = help(word1, word2, 0, 0, n, m, memo);
        return ans;
    }
};