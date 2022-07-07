class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> arr(123, 0);
        for (auto x: s) {
            arr[x]++;
        }
        
        int count = 0;
        for(int i=65; i<123; i++) {
            if (arr[i]==0) continue;
            if(arr[i]%2 == 0) {
                count += arr[i];
            } else {
                count += arr[i]-1;
            }
        }
        
        if (count<s.length()) count++;
        
        return count;
    }
};