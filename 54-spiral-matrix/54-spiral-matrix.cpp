class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row, col;
        int startrow, endrow, startcol, endcol;
        
        int count;
        
        row = matrix.size();
        col = matrix[0].size();
        
        startrow = startcol = 0;
        endrow = row-1;
        endcol = col-1;
        count = row*col;
        int i;
        vector<int> ans;
        while(count>0) {
            
            for (i = startcol; i<=endcol and count>0; i++) {
                ans.push_back(matrix[startrow][i]);
                count--;
            }
            startrow++;
            
            for(i=startrow; i<=endrow and count>0; i++) {
                ans.push_back(matrix[i][endcol]);
                count--;
            }
            
            endcol--;
            
            for (i = endcol; i>=startcol and count>0; i--){
                ans.push_back(matrix[endrow][i]);
                count--;
            }
            
            endrow--;
            
            
            for (i=endrow; i>=startrow and count>0; i--) {
                ans.push_back(matrix[i][startcol]);
                count--;
            }
            startcol++;
        }
        
        return ans;
    }
};