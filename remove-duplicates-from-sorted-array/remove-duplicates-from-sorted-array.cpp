class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, k=1;
        int n = nums.size();
        for (i = 1; i<n; i++) {
            if (nums[i]!=nums[i-1]) {
                nums[k]=nums[i];
                k++;
            }
        }
        
        
        return k;
    }
};