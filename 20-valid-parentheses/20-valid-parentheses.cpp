class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length()==1) return false;
        for(auto x: s) {
            if(x=='(' || x=='[' || x=='{') {
                st.push(x);
            } else {
                if(x==')') {
                    if(st.size()>0 && st.top()=='('){
                        st.pop();
                    } else return false;
                }
                
                if(x=='}') {
                    if(st.size()>0 && st.top()=='{'){
                        st.pop();
                    } else return false;
                }
                
                if(x==']') {
                    if(st.size()>0 &&  st.top()=='['){
                        st.pop();
                    } else return false;
                }
            }
        }
        
        if(st.size()==0)  return true;
        return false;
    }
};