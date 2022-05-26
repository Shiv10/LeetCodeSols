// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> ans;
    void getSubsets(vector<int> &arr, vector<int> temp, int ind, int n) {
        if (ind>=n) {
            int sum = 0;
            for(auto x: temp) {
                sum+=x;
            }
            ans.push_back(sum);
            return;
        }
        
        getSubsets(arr, temp, ind+1, n);
        temp.push_back(arr[ind]);
        getSubsets(arr, temp, ind+1, n);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int> temp;
        getSubsets(arr, temp, 0, n);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends