class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int i, j, n;
        n = values.size();
        int maxi = values[0];
        int ans = -1;
        
        for(i=1;i<n;i++) {
            ans = max(ans, maxi+values[i]-i);
            maxi = max(maxi, values[i]+i);
        }
        
        return ans;
    }
};