class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(26, 0);
        int start = 0;
        f[s[0]-65] = 1;
        int mf = 1;
        int end = 0;
        int maxLen = end-start+1;
        
        for (int i = 1; i<s.length(); i++) {
            end = i;
            f[s[i]-65]++;
            mf = *max_element(f.begin(), f.end());
            
            int currLen = end - start + 1;
            
            int change = currLen - mf;
            if (change > k) {
                //do something
                while(start < end and change > k) {
                    f[s[start]-65]--;
                    mf = *max_element(f.begin(), f.end());
                    start++;
                    currLen--;
                    change = currLen - mf;
                }
            }
            maxLen = max(maxLen, currLen);
        }
        
        return maxLen;
    }
};