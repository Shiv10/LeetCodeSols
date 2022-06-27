class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i, j, k;
        int diff, sum;
        int n = nums.size();
        vector<vector<int>> ans;
        i = 0;
        while(i<n-2) {
            diff = 0 - nums[i];
            j = i+1;
            k = n-1;
            while(j<k) {
                sum = nums[j]+nums[k];
                if (sum == diff) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    int c = j;
                    while(nums[c]==nums[j] && j<k) {
                        j++;
                    }
                    
                    c = k;
                    while(nums[c]==nums[k] && k>j) {
                        k--;
                    }
                } else if (sum<diff) {
                    int c = j;
                    while(nums[c]==nums[j] && j<k) {
                        j++;
                    }
                } else {
                    int c = k;
                    while(nums[c]==nums[k] && k>j) {
                        k--;
                    }
                }
            }
            int c = i;
            while(nums[c]==nums[i] && i<n-2) {
                i++;
            }
        }
        return ans;
    }
};