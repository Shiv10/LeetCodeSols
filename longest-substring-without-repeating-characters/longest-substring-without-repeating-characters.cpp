class Solution {
public:
    struct Node {
        int value = -1;
    };
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, Node> v;
        int start, end, n;
        
        n = s.length();
        if(n==0) return 0;
        
        start = 0;
        end  = 1;
        v[s[start]].value = 0;
        int curr = 1, m = 1;
    
        
        while(end < n) {
            if(v[s[end]].value==-1) {
                curr++;
                v[s[end]].value = end;
                end++;
            } else {
                int ind = v[s[end]].value;
                if(ind>=start && ind<end) {
                    start = ind+1;
                    curr = end-start+1;
                    v[s[ind]].value = end;
                    end++;
                } else {
                    v[s[end]].value = end;
                    end++;
                    curr++;
                }
            }
            m = max(m, curr);
        }
        return m;
    }
};