class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i=0, temp;
        vector<int> v;
        for (auto x: nums) {
            v.push_back(x*x);
        }
        sort(v.begin(), v.end());
        return v;
    }
};