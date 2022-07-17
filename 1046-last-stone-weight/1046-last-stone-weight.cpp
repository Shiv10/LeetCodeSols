class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> st(stones.begin(), stones.end());
        
        while(st.size()>1) {
            int a, b;
            a = st.top();
            st.pop();
            
            b = st.top();
            st.pop();
            
            if (a==b) {
                continue;
            };
            
            int c = abs(a-b);
            st.push(c);
        }
        
        if (st.size()==0) {
            return 0;
        }
        
        return st.top();
    }
};