class Solution {
public:
    vector<string> ans;
    void solve(int n, int open, int close, string curr) {
        if (open == n and close == n) {
            ans.push_back(curr);
        }
        
        if (open < n) {
            solve(n, open+1, close, curr+"(");
        }
        
        if (close < open) {
            solve(n, open, close +1, curr+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(n, 0, 0, "");
        return ans;
    }
};