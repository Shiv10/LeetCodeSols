// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string> ans;
    bool visited[5][5];
    void solve(vector<vector<int>> &m, int x, int y, int n, string s) {

        if(x==n-1 && y==n-1) {
            ans.push_back(s);
            return;
        }
        
        
        string w="";
        if (x<n-1 && m[x+1][y]!=0 && !visited[x+1][y]) {
            w = s+'D';
            visited[x+1][y] = true;
            solve(m, x+1, y, n, w);
            visited[x+1][y] = false;
        }
        
        if (x>0 && m[x-1][y]!=0 && !visited[x-1][y]) {
            w = s+'U';
            visited[x-1][y] = true;
            solve(m, x-1, y, n, w);
            visited[x-1][y] = false;
        }
        
        if (y<n-1 && m[x][y+1]!=0 && !visited[x][y+1]) {
            w = s+'R';
            visited[x][y+1] = true;
            solve(m, x, y+1, n, w);
            visited[x][y+1] = false;
        }
        
        if (y>0 && m[x][y-1]!=0 && !visited[x][y-1]) {
            w = s+'L';
            visited[x][y-1] = true;
            solve(m, x, y-1, n, w);
            visited[x][y-1] = false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        memset(visited, false, sizeof(visited));
        if (m[0][0] == 0) {
            ans.push_back("-1");
            return ans;
        }
        visited[0][0] = true;
        solve(m, 0, 0, n, "");
        if(ans.size()==0) {
            ans.push_back("-1");
        }
        return ans;
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends