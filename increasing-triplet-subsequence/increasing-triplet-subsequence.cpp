class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a, b;
        a = b = INT_MAX;
        for (auto x: nums) {
            if (x<=a) a=x;
            else if (x<=b) b=x;
            else return true;
        }
        return false;
    }
};