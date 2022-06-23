class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n, i, maxe;
        n = prices.size();
        vector<int> ng(n);
        ng[n-1] = -1;
        maxe = prices[n-1];
        for (i = n-2; i>-1; i--) {
            if (prices[i]<=maxe) {
                ng[i] = maxe;
            } else {
                ng[i] = -1;
                maxe = prices[i];
            }
        }
        
        int ans = 0;
        for (i = 0; i<n; i++) {
            if (ng[i]!=-1) {
                ans = max(ans, ng[i] - prices[i]);
            }
        }
        return ans;
    }
};