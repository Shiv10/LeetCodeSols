class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        
        for(auto x: s) {
            if (x=='#') {
                if (!s1.empty())
                    s1.pop();
                continue;
            }
            
            s1.push(x);
        }
        
        for(auto x: t) {
            if (x=='#') {
                if (!s2.empty())
                    s2.pop();
                continue;
            }
            
            s2.push(x);
        }
        
        while(!s1.empty() and !s2.empty()) {
            if(s1.top() != s2.top()) {
                return false;
            }
            
            s1.pop();
            s2.pop();
        }
        
        
        return (s1.empty() and s2.empty());
    }
};