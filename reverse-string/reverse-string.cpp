class Solution {
public:
    void reverseString(vector<char>& s) {
        int l, r, n;
        n = s.size();
        r = n-1;
        l = 0;
        char temp;
        while(l<=r) {
            temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
    }
};