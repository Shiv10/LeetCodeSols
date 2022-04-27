class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n, k, l;
        n = nums.size();
        for(k=n-2; k>=0; k--) {
            if (nums[k]<nums[k+1])
                break;
        }
        
        if (k<0){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        for (l=n-1; l>k;l--) {
            if (nums[l]>nums[k])
                break;
        }
        
        int temp = nums[l];
        nums[l] = nums[k];
        nums[k] = temp;
        
        reverse(nums.begin()+k+1, nums.end());
    }
};