class Solution {
public:
    bool binarySearch(vector<int> &v, int target) {
        int mid, low, high;
        low = 0;
        high = v.size()-1;
        while(low<=high) {
            mid = low+(high-low)/2;
            if(v[mid]==target) {
                return true;
            }
            
            if(v[mid]<target){
                low = mid+1;
            } else {
                high = mid - 1;
            } 
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_high, row_low, col_high, col_low;
        int mid, tr=-1;
        row_low = 0;
        row_high = matrix.size()-1;
        
//         if (matrix[0][0]<=target && matrix[0][matrix[0].size()-1]>=target) {
//             bool res = binarySearch(matrix[0], target);
//             return res;
//         }
        
//         if (matrix[row_high][0] <= target && matrix[row_high][matrix[0].size()-1]>=target) {
//             bool res = binarySearch(matrix[row_high], target);
//             return res;
//         }
        
        
        
        while(row_low<=row_high) {
            mid = row_low + (row_high-row_low)/2;
            if (matrix[mid][0]==target) {
                return true;
            }
            
            if (matrix[mid][0] < target && matrix[mid][matrix[0].size()-1]>=target) {
                tr = mid;
                break;
            }
            
            if (matrix[mid][0]>target) {
                row_high = mid-1;
            } else {
                row_low = mid+1;
            }
            
        }
        if (tr == -1) {
            return false;
        } else {
            return binarySearch(matrix[tr], target);
        }
    }
};