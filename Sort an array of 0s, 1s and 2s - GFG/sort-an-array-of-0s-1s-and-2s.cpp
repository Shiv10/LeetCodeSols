// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int z, o, t;
        z = t = o = 0;
        for(int i = 0; i<n; i++) {
            if (a[i]==0) z++;
            if (a[i]==1) o++;
            if (a[i]==2) t++;
        }
        int k = 0, i;
        for(i = 0; i<z; i++) {
            a[k++] = 0;
        }
        
        for(i = 0; i<o; i++) {
            a[k++] = 1;
        }
        
        for(i = 0; i<t; i++) {
            a[k++] = 2;
        }
        
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends