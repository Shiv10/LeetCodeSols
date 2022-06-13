class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;
        int n = s.length();
        int p = t.length();
        if (n!=p) return false;
        
        for (int i = 0; i<n; i++) {
            if (m.find(s[i])==m.end()) {
                m[s[i]] = 1;
            } else {
                m[s[i]]++;
            }
        }
        
        for (int i = 0; i<p; i++) {
            if (m.find(t[i])==m.end() || m[t[i]] == 0) {
                return false;
            } else {
                m[t[i]]--;
            }
        }
        return true;
    }
};