class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i=0, n, index, r, l;
        n = nums.size();
        vector<int> v(n);
        index = 0;

        int small = 0;
        for(i=0;i<n;i++) {
            if(abs(nums[i])<abs(nums[small])) {
                small = i;
            }
        }
        
        l= small;
        r = small +1;
        while( l>=0 || r<n ) {
            
            if(l<0 || r<n && (abs(nums[r])<abs(nums[l])) ){
                v[index++] = nums[r]*nums[r];
                r++;
            } else {
                v[index++] = nums[l]*nums[l];
                l--;
            }
        }
        return v;
    }
};