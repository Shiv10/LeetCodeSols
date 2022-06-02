class Solution {
public:
    vector<vector<string>> ans;
    void solve(int col, int n, vector<int> &left, vector<int> &lowerDiag, vector<int>& upperDiag, vector<string> &board) {
        if(col==n) {
            ans.push_back(board);
            return;
        }
        
        for(int i = 0; i<n; i++) {
            if(left[i]==0 && lowerDiag[i+col]==0 && upperDiag[n - 1 + col - i ]==0) {
                left[i]=1;
                lowerDiag[i+col]=1;
                upperDiag[n - 1 + col - i ]=1;
                board[i][col] = 'Q';
                solve(col+1, n, left, lowerDiag, upperDiag, board);
                left[i]=0;
                lowerDiag[i+col]=0;
                upperDiag[n - 1 + col - i ]=0;
                board[i][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i<n; i++) {
            board[i] = s;
        }
        vector<int> left(n, 0), lowerDiag(2*n-1, 0), upperDiag(2*n-1, 0);
        solve(0, n, left, lowerDiag, upperDiag, board);
        return ans;
    }
};