class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char, char> m;
        m[')'] = '(';
        m[']'] = '[';
        m['}'] = '{';
        
        int i, l;
        l = s.length();
        
        if(l==1) return false;
        
        for (i = 0; i<l; i++) {
            char ch = s[i];
            if (ch=='}' || ch==')' || ch==']') {
                if (st.size() != 0 && st.top()==m[ch]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(ch);
            }
        }
        
        if(st.size()==0) {
            return true;
        }
        return false;
    }
};