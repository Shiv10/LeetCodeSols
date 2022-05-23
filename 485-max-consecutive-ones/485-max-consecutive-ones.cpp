class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0, c = 0;
        for(auto x: nums) {
            if(x==1){
                c++;
            } else {
                c = 0;
            }
            
            m = max(m, c);
        }
        return m;
    }
};