class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = *max_element(nums.begin(), nums.end());
        int maxTillNow = 1;
        int minTillNow = 1;
        
        int i, n;
        n = nums.size();
        
        for(i=0;i<n;i++) {
            if(nums[i]==0) {
                maxTillNow = 1;
                minTillNow = 1;
                continue;
            }
            
            int temp = maxTillNow*nums[i];
            maxTillNow = max({nums[i]*maxTillNow, nums[i]*minTillNow, nums[i]});
            
            minTillNow = min({temp, nums[i]*minTillNow, nums[i]});
            
            ans = max({ans, maxTillNow, minTillNow});
        }
        return ans;
    }
};