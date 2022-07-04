class Solution {
public:
    bool solve(vector<vector<bool>> &visited, int i, int j, int n, int m, int ind, int l, vector<vector<char>>& board, string word) {
        if (ind>=l) {
            return true;
        }
        
        if (i<0 or i>=n or j<0 or j>=m or board[i][j]!=word[ind] or visited[i][j]) return false;
        
        visited[i][j] = true;
        bool res = (
            solve(visited, i+1, j, n, m, ind+1, l, board, word) or
            solve(visited, i-1, j, n, m, ind+1, l, board, word) or
            solve(visited, i, j+1, n, m, ind+1, l, board, word) or
            solve(visited, i, j-1, n, m, ind+1, l, board, word)
        );
        
        visited[i][j] = false;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int i, j, n, m, l;
        n = board.size();
        m = board[0].size();
        l = word.length();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for(i = 0; i<n; i++) {
            for (j=0; j<m; j++) {
                if (solve(visited, i, j, n, m, 0, l, board, word)) return true;
            }
        }
        
        return false;
    }
};