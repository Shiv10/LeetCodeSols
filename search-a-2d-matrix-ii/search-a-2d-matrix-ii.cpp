class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row, col, i, j;
        
        row = matrix.size();
        col = matrix[0].size();
        
        i = 0;
        j = col-1;
        
        while(i<row and j>-1) {
            if (matrix[i][j] ==  target) return true;
            
            if (matrix[i][j] < target) {
                i++;
            } else {
                j--;
            }
        }
        
        return false;
    }
};