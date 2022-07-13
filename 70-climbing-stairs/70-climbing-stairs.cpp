class Solution {
public:
    int climbStairs(int n) {
        int arr[n+1];
        int i;
        if (n==0) return 0;
        if (n==1) return 1;
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        
        for(i = 3; i<=n; i++) {
            arr[i] = arr[i-1]+arr[i-2];
        }
        
        return arr[n];
    }
};