class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        string w = "";
        for(int i = 0; i < s.length(); i++) {
            bool flag = true;
            for(int j = 0; j<strs.size(); j++) {
                if (strs[j][i] != s[i]) {
                    flag = false;
                    break;
                }
            }
            
            if (!flag) break;
            
            w += s[i];
        }
        return w;
    }
};