class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target = 0;
        int i, j, k, n;
        i = 0;
        n = nums.size();
        vector<vector<int>> ans;
        while(i<n-2) {
            int diff = target - nums[i];
            j = i + 1;
            k = n -1;
            while(j<k) {
                int sum = nums[k]+nums[j];

                if (sum == diff) {
                    vector<int> t;
                    t.push_back(nums[i]);
                    t.push_back(nums[j]);
                    t.push_back(nums[k]);
                    ans.push_back(t);
                    int cj = j;
                    while(nums[cj]==nums[j] && j<n-1) {
                        j++;
                    }
                }
                
                if (sum<diff) {
                    int cj = j;
                    while(nums[cj]==nums[j] && j<n-1) {
                        j++;
                    }
                } else {
                    int ck = k;
                    while(nums[k]==nums[ck] && k>i) {
                        k--;
                    }
                }
            }
            int ci = i;
            while(nums[ci]==nums[i] && i<n-2) {
                i++;
            }
        }
        return ans;
    }
};