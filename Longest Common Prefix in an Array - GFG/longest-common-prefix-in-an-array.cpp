// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        string s = arr[0];
        string w = "";
        
        for(int k = 0; k<s.length();k++) {
            bool flag = false;
            for(int i = 0;i < n; i++) {
                if (arr[i].length()<=k || arr[i][k]!=s[k]) {
                    flag = true;
                    break;
                }
            }
            if (flag) break;
            w =  w+s[k];
        }
        if(w.length()==0) w = "-1";
        return w;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends