class Solution {
public:
    bool compare(vector<int> &a1, vector<int> &a2) {
        int i = 0;
        for(i=0;i<27;i++) {
            if(a1[i]!=a2[i]) return false;
        }
        
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        vector<int> a1(27, 0);        
        vector<int> a2(27, 0);
        
        for(auto x: s1) {
            int c = x;
            a1[c-96]++;
        }
        
        int n1, n2;
        n1 = s1.length();
        n2 = s2.length();
        
        if(n1>n2) return false;
        
        int i = 0;
        while(i<n1) {
            int c = s2[i];
            a2[c-96]++;
            i++;
        }
        
        bool res = compare(a1, a2);
        if(res) return true;
        
        for(i=1;i<=n2-n1;i++) {
            int c = s2[i-1];
            a2[c-96]--;
            c = s2[i+n1-1];
            a2[c-96]++;
            res = compare(a1, a2);
            if(res) return true;
        }
        return false;
    }
};