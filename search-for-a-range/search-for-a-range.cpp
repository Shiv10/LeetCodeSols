class Solution {
public:
    int next(vector<int> &nums, int target, bool f) {
        int low, high, mid;
        low = 0;
        high = nums.size()-1;
        
        int ans = -1;
        
        while(low<=high) {
            mid = low + (high-low)/2;
            
            if (nums[mid]==target) {
                cout<<mid<<endl;
                ans = mid;
                if (f) {
                    low = mid+1;
                } else {
                    high = mid-1;
                }
                continue;
            }
            
            if (nums[mid]<target) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int a, b;
        a = next(nums, target, false);
        b = next(nums, target, true);
        
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};