class Solution {
public:
    void helper(vector<vector<int>> &image, vector<vector<int>> &visited, int x, int y, int m, int n, int newColor){
        
        if(visited[x][y]!=-1) return;
        
        visited[x][y] = 0;
        int oldColor = image[x][y];
        image[x][y] = newColor;
        
        
        if(x>0 && image[x-1][y] == oldColor) {
            helper(image, visited, x-1, y, m, n, newColor);
        }
        
        if(y>0 && image[x][y-1] == oldColor) {
            helper(image, visited, x, y-1, m, n, newColor);
        }
        
        if(x<m-1 && image[x+1][y] == oldColor) {
            helper(image, visited, x+1, y, m, n, newColor);
        }
        
        if (y<n-1 && image[x][y+1] == oldColor) {
            helper(image, visited, x, y+1, m, n, newColor);
        }
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> visited(image.size(), vector<int>(image[0].size(), -1));
        int m, n;
        m = image.size();
        n = image[0].size();
        helper(image, visited, sr, sc, m, n, newColor);
        return image;
    }
};