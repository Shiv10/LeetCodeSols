class Solution {
public:
    int merge(vector<int> &nums, int mid, int low, int high) {
        
        int i, j=mid+1;
        int count = 0;
        for (i=low;i<=mid;i++) {
            while(j<high+1 && nums[i]>nums[j]*2LL){
                j++;
            }
            count += j - (mid+1); 
        }
        
        
        vector<int> temp;
        i = low;
        j = mid+1;
        while(i<mid+1 &&j<high+1) {
            if(nums[i]<nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        
        while(i<mid+1) {
            temp.push_back(nums[i]);
            i++;
        }
        
        while (j<=high) {
            temp.push_back(nums[j]);
            j++;
        }
        int k = 0;
        for(int i = low; i<=high; i++) {
            nums[i] = temp[k++];
        }
        return count;
    }
    int mergeSort(vector<int> &nums, int low, int high) {
        if (low>=high) {
            return 0;
        }
        
        int  mid = (low+high)/2;
        int count = mergeSort(nums, low, mid);
        count += mergeSort(nums, mid+1, high);
        count += merge(nums, mid, low, high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int count = mergeSort(nums, 0, nums.size()-1);
        
        return count;
    }
};