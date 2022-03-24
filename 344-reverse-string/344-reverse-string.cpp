class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n, l, r;
        n = s.size();
        r = n-1;
        l = 0;
        char temp;
        
        while(l<=r) {
            temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            r--;
            l++;
        }
    }
};