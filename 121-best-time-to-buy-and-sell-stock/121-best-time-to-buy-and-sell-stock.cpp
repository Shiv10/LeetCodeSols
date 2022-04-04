class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> s;
        int n = prices.size();
        vector<int> v(n, 0);
        int ans = 0;
        int i;
        s.push(prices[n-1]);
        for (i=n-2;i>-1;i--) {
            while(!s.empty()) {
                if(s.top()>prices[i]) {
                    v[i] = s.top()-prices[i];
                    break;
                } else {
                    s.pop();
                }
            }
            
            if(v[i]==0) {
                s.push(prices[i]);
            } else {
                if (v[i]>ans) {
                    ans = v[i];
                }
            }
        }
        
        return ans;
    }
};