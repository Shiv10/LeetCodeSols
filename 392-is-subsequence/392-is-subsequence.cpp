class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s=="" and t=="") return true;
        int i = 0;
        int n = s.length();
        for(auto x: t) {
            if (x == s[i]) {
                i++;
            }
            
            if (i==n) {
                return true;
            }
        }
        
        return false;
    }
};