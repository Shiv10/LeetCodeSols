class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i, n = digits.size();
        int s = 0;
        i = n-1;
        vector<int> ans;
        int carry = 0;
        s = digits[i]+1;
        carry = s/10;
        s = s%10;
        i--;
        ans.push_back(s);
        while(i>=0 && carry==1) {
            s = digits[i]+carry;
            carry = s/10;
            s = s%10;
            ans.push_back(s);
            i--;
        }
        
        if (i<0 && carry == 1) {
            ans.push_back(1);
        } else {
            for(int j = i; j>-1; j--) {
                ans.push_back(digits[j]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};