class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string w = "";
        for (auto x: s) {
            if ((x>=97 && x<=122) || (x>=48 && x<=57)) {
                w+=x;
            }
        }
        int high, low;
        low = 0;
        high = w.size()-1;
        
        while (low<=high) {
            if(w[low++]!=w[high--]) return false;
        }
        return true;
    }
};