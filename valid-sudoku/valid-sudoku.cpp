class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> c;
        int i, j;
        for (i=0; i<9; i++) {
            for (j = 0; j<9; j++) {
                if (board[i][j]=='.') continue;
                if (c.find(board[i][j])!=c.end()){
                    return false;
                } 
                c.insert(board[i][j]);
            }
            
            c.clear();
        }
        
        for (j=0; j<9; j++) {
            for (i = 0; i<9; i++) {
                if (board[i][j]=='.') continue;
                if (c.find(board[i][j])!=c.end()) {
                    return false;
                }
                c.insert(board[i][j]);
            }
            
            c.clear();
        }
        
        i = j = 0;
        
        while(i<9) {
            for (int start = i; start<i+3; start++) {
                for(int end = j; end<j+3; end++) {
                    if (board[start][end]=='.') continue;
                    if (c.find(board[start][end])!=c.end()) return false;
                    c.insert(board[start][end]);
                }
                
            }
            c.clear();
            j+=3;
            
            if (j==9) {
                i+=3;
                j=0;
            }
        }
        
        return true;
    }
};