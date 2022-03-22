class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i, n;
        n = nums.size();
        vector<int> v(n);
        
        for(i=0;i<n;i++) {
            v[(i+k)%n] = nums[i];
        }
        
        for (i=0;i<n;i++) {
            nums[i] = v[i];   
        }
           
        
    }
};