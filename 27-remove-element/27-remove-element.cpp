class Solution {
    public:
    int removeElement(vector<int>& nums, int val) {
        
        if(empty(nums)) return 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i =0;i<nums.size();i++){
            
            if(nums[i]>val)break;
            if(nums[i]==val){
                
                while(i+1<nums.size() && nums[i] == nums[i+1]){
                    nums.erase(nums.begin()+(i+1));
                }
                
                nums.erase(nums.begin()+i);
                break;
            }
        }
        return nums.size();
    }
};