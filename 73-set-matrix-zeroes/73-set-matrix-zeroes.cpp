class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n, m;
        n = matrix.size();
        m = matrix[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m, -1));
        
        int i,j;
        for (i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                if (visited[i][j]==0) continue;
                
                visited[i][j] = 0;
                if (matrix[i][j]==0) {
                    for(int k=0;k<n;k++){
                        if (matrix[k][j]!=0){
                            visited[k][j] = 0;
                            matrix[k][j] = 0;
                        }
                    }
                    
                    for (int k=0;k<m;k++) {
                        if (matrix[i][k]!=0){
                            matrix[i][k] = 0;
                            visited[i][k] = 0;
                        }
                    }
                }
            }
        }
    }
};