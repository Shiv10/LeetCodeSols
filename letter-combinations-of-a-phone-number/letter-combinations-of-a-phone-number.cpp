class Solution {
public:
    map<char, string> chars;
    vector<string> ans;
    void solve(string digits, int n, int ind, string s) {
        if (ind>=n) {
            ans.push_back(s);
            return;
        }
        
        for (auto x: chars[digits[ind]]) {
            s += x;
            solve(digits, n, ind+1, s);
            s = s.substr(0, s.length()-1);
        }
    }
    vector<string> letterCombinations(string digits) {
        chars['2'] = "abc";
        chars['3'] = "def";
        chars['4'] = "ghi";
        chars['5'] = "jkl";
        chars['6'] = "mno";
        chars['7'] = "pqrs";
        chars['8'] = "tuv";
        chars['9'] = "wxyz";
        
        int n = digits.length();
        if (n==0) return ans;
        solve(digits, n, 0, "");
        return ans;
    }
};