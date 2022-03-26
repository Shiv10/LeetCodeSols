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
        
        for(auto x: s) {
            cout<<v[x].value<<" ";
        }
        
        cout<<endl;
        
        while(end < n) {
            if(v[s[end]].value==-1) {
                curr++;
                cout<<"con1 "<<v[s[end]].value;
                v[s[end]].value = end;
                end++;
            } else {
                int ind = v[s[end]].value;
                if(ind>=start && ind<end) {
                    cout<<"con2 "<<v[s[end]].value;
                    start = ind+1;
                    curr = end-start+1;
                    v[s[ind]].value = end;
                    end++;
                } else {
                    cout<<"con3 "<<v[s[end]].value;
                    v[s[end]].value = end;
                    end++;
                    curr++;
                }
            }
            cout<<endl;
            m = max(m, curr);
        }
        return m;
    }
};