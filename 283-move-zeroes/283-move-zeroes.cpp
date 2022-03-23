class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i, n, k;
        
        n = nums.size();
        vector<int> v;
        k =0;
        
        for(i=0;i<n;i++) {
            if(nums[i] == 0) {
                continue;
            }
            
            v.push_back(nums[i]);
            k++;
        }
        

        
        while(k<n) {
            v.push_back(0);
            k++;
        }
        
        k = 0;
        // for(auto x: v) {
        //     nums[k++] = x;
        // }
        nums = v;

    }
};