class Solution {
public:
    void DFS(vector<vector<char>> &grid, int i, int j, int n, int m) {
        if (i<0 or j<0 or i>n-1 or j>m-1) {
            return;
        }
        
        if (grid[i][j]=='0') return;
        
        grid[i][j] = '0';
        
        DFS(grid, i+1, j, n, m);
        DFS(grid, i, j+1, n, m);
        DFS(grid, i-1, j, n, m);
        DFS(grid, i, j-1, n, m);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int i, j, n, m, count = 0;
        
        n = grid.size();
        m = grid[0].size();
        
        for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                if (grid[i][j] == '1') {
                    count++;
                    DFS(grid, i, j, n, m);
                }
            }
        }
        
        return count;
    }
};