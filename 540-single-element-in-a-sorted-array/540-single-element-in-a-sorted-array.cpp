class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        
        int mid;
        while(low<=high){
            mid = (low+high)/2;
            
            if (mid!=nums.size()-1 && nums[mid]==nums[mid+1]) {
                if (mid%2!=0) {
                    high = mid - 1;
                } else {
                    low = mid+1;
                }
            } else if (mid!=0 && nums[mid]==nums[mid-1]) {
                if(mid%2==0) {
                    high = mid - 1;
                } else {
                    low = mid+1;
                }
            } else {
                return nums[mid];
            }
        }
        return nums[low];
    }
};