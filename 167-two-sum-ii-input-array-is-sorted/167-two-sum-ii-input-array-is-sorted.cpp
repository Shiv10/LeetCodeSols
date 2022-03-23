class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n, l, r;
        n = nums.size();
        l = 0;
        r = n-1;
        
        vector<int> v;
        
        while(l<r) {
            int sum = nums[l]+nums[r];
            
            if(sum == target) {
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            
            if(sum<target) {
                l++;
            } else {
                r--;
            }
        }
        
        return v;
    }
};