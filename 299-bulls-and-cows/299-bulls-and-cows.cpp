class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length(), i;
        map<char, int> freq;
        vector<bool> present(n, false);
        int bulls = 0;
        for (i=0; i<n; i++) {
            freq[secret[i]]++;
            if (secret[i]==guess[i]) {
                freq[secret[i]]--;
                present[i] = true;
                bulls++;
            }
        }
        
        int cows = 0;
        for(i=0; i<n; i++) {
            if (present[i]) continue;
            if (freq[guess[i]] > 0) {
                cows++;
                freq[guess[i]]--;
            }
        }
        string w = to_string(bulls)+"A"+to_string(cows)+"B";
        return w;
    }
};