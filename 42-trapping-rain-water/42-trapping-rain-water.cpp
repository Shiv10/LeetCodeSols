class Solution {
public:
    vector<int> nextGreatest(vector<int> &h) {
        int n = h.size();
        vector<int> ans(n, -1);
        int g;
        g = h[n-1];
        int i;
        for(i=n-1;i>-1;i--) {
            if(h[i]<g) {
                ans[i] = g;
            } else {
                g = h[i];
            }
        }
        return ans;
    }
    
    vector<int> prevGreatest(vector<int> &h) {
        int n = h.size(), i, g = h[0];
        vector<int> ans(n, -1);
        for(i = 0; i<n; i++) {
            if(g>h[i]) {
                ans[i] = g;
            } else {
                g = h[i];
            }
        }
        return ans;
    }
    
    int trap(vector<int>& height) {
        vector<int> ng = nextGreatest(height);
        vector<int> pg = prevGreatest(height);
        
        int i, n, ans = 0;
        n = height.size();
        
        for(i=0; i<n; i++) {
            if (ng[i]==-1 || pg[i]==-1) continue;
            
            int diff = min(ng[i], pg[i]) - height[i];
            ans += diff;
        }
        return ans;
    }
};