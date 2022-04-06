class Solution {
public:
    int trap(vector<int>& height) {
        int i, n;
        n = height.size();
        vector<int> ng(n,-1);
        vector<int> pg(n,-1);
        int maxi = height[n-1];
        
        for(i=n-2;i>-1;i--) {
            if(height[i]<maxi) {
                ng[i] = maxi;
            } else {
                maxi = height[i];
            }
        }
        
        maxi = height[0];
        for(i=1;i<n;i++) {
            if(height[i]<maxi) {
                pg[i] = maxi;
            } else {
                maxi = height[i];
            }
        }
        
        int ans = 0;
        int temp;
        for(i=1; i<n-1; i++) {
            if(pg[i]!=-1 && ng[i]!=-1) {
                temp = min(pg[i], ng[i]);
                ans += temp - height[i];
            }    
        }
        
        
        return ans;
    }
};