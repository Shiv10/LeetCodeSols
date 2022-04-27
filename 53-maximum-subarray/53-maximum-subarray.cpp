class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int f = 0, sum = 0, i, n, maxn, maxe = nums[0];
        maxn = INT_MIN;
        n = nums.size();
        for(i=0;i<n;i++) {
            sum += nums[i];
            if (nums[i]>0)
                f = 1;
            
            if (nums[i]>maxe)
                maxe = nums[i];
            
            if (sum>maxn) 
                maxn = sum;
            
            if (sum<0)
                sum = 0;            
        }
        
        if (f==0)
            return maxe;
        
        return maxn;
    }
};