class Solution {
public:
    void helper(vector<vector<int>>& grid, int x, int y, int &curr){
        
        if (x>=grid.size() || y>=grid[0].size() || x<0 || y<0 || grid[x][y]==-1 ) return;
        
        if (grid[x][y] == 0) return;
        
        curr++;
        grid[x][y] = -1;
        
        helper(grid, x-1, y, curr);
        helper(grid, x, y-1, curr);
        helper(grid, x+1, y, curr);
        helper(grid, x, y+1, curr);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        
        int m = grid[0].size();
        
        int maxi = 0;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int count = 0;
                
                if(grid[i][j] != -1)
                {
                    helper(grid, i, j, count);
                    
                    maxi = max(count, maxi);
                }
            }
        }
        
        return maxi;
    }
};