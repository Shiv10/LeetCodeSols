class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> v;
        for(auto x: nums) {
            if(v.find(x)==v.end()){
                v[x] = 1;
            } else {
                return x;
            }
        }
        return -1;
    }
};