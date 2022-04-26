class Solution {
public:
    
    int maxSubArray(vector<int>& nums) {
        int curr = 0, m = 0;
        bool flag = true;
        int mel = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0) {
                flag = false;
            }
            
            if(nums[i]>mel) {
                mel = nums[i];
            }
            
            curr += nums[i]; 
            if(curr<0) {
                curr=0;
                continue;
            }
            
            if(curr>m) {
                m = curr;
            }
        }
        
        if (flag) {
            return mel;
        }
        
        return m;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxWithoutLoop = maxSubArray(nums);
        
        if (maxWithoutLoop<0) {
            return maxWithoutLoop;
        }
        
        int arrSum = 0;
        for(int i = 0; i<nums.size(); i++) {
            arrSum += nums[i];
            nums[i] = 0-nums[i];
        }
        
 
        
        int minSum = maxSubArray(nums);
        
        return max(maxWithoutLoop, arrSum+minSum);
    }
};