class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char, int> m;
        map<char, int> m2;
        
        int n, l;
        n = p.length();
        l = s.length();
        int i;
        for(i=0;i<n;i++) {
            m[p[i]]++;
            m2[s[i]]++;
        }
        
        vector<int> ans;
        
        if (m==m2) {
            ans.push_back(0);
        }
        
        int start = 0;
        for (i=n;i<l;i++) {
            m2[s[i]]++;
            
            m2[s[start]]--;
            
            if (m2[s[start]]==0) {
                m2.erase(s[start]);
            }
            
            start = i-n+1;
            
            if (m==m2) {
                ans.push_back(start);
            }
        }
        
        return ans;
    }
};