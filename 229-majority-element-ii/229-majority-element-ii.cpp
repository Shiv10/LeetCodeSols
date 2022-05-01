class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size()==1){
            return nums;
        }
        
        int n = nums.size()/3;
        
        vector<int> ans;
        unordered_map<int, int> v;
        
        for(auto x: nums) {
            if (v.find(x)==v.end()){
                v[x] = 1;
            } else {
                v[x]++;
            }
            
            if (v[x]>n) {
                vector<int>::iterator it;
                it = find(ans.begin(), ans.end(), x);
                
                if (it==ans.end()) {
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};