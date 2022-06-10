class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, n;
        if(needle=="" || needle==haystack) return 0;
        n = needle.length();
        string w = "";
        
        for(i=0;i<n;i++) {
            w+=haystack[i];
        }
        
        int m = haystack.length();
        
        for(i=n; i<m; i++) {
            if(w==needle) {
                return i-n;
            }
            
            w = w.substr(1);
            w += haystack[i];            
        }
        if (w == needle) {
            return i-n;
        }
        return -1;
    }
};