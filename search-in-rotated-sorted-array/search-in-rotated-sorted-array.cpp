class Solution {
public:
    int getPivot(vector<int> &nums) {
        int n = nums.size();
        if (nums[0]<nums[n-1]) return 0;
        
        int low, high, mid;
        low = 0;
        high = n-1;
        
        while(low<=high) {
            mid = low+(high-low)/2;
            
            if (mid>0 and nums[mid]<nums[mid-1]) {
                return mid;
            }
            
            if (mid<n-1 and nums[mid+1] < nums[mid]) {
                return (mid+1);
            }
            
            if (nums[mid]>nums[0]) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        
        return 0;
    }
    
    int binary(vector<int>& nums, int target, int low, int high) {
        int mid;
        
        while(low<=high) {
            mid = low + (high-low)/2;
            
            if (nums[mid]==target) return mid;
            
            if (nums[mid]>target) {
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);
        int ans;
        ans = binary(nums, target, 0, pivot-1);
        if (ans!=-1) return ans;
        
        ans = binary(nums, target, pivot, nums.size()-1);
        return ans;
    }
};