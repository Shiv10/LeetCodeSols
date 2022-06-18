class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0, n, k;
        n = nums1.size();
        k = nums2.size();
        vector<int> ans;
        
        while(i<n && j<k) {
            if(nums1[i]==nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            
            if (j>=k || i>=n) break;
            
            if (nums1[i]<nums2[j]) {
                while(i<n && nums1[i]<nums2[j]) {
                    i++;
                }
                continue;
            }
            
            if (nums1[i]>nums2[j]) {
                while(j<k && nums2[j]<nums1[i]) {
                    j++;
                }
            }
        }
        
        return ans;
    }
};