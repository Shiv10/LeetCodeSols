class Solution {
public:
    int countPrimes(int n) {
        vector<bool> arr(n+1, true);
        if (n<=2) return 0;
        for (int p = 2; p*p <= n; p++) {
            if (arr[p]) {
                for (int i = p*p; i<=n; i+=p) {
                    arr[i] = false;
                }
            }
        }
        
        int c = 0;
        for (int i = 2; i<n; i++) {
            if (arr[i]) c++;
        }
        
        return c;
    }
};