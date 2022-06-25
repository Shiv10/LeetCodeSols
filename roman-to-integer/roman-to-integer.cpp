class Solution {
public:
    int romanToInt(string s) {
        int n =  s.length();
        map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int sum = m[s[n-1]];
        
        char prev = s[n-1];
        
        for(int i = n-2; i>-1; i--) {
            if (m[s[i]] < m[prev]) {
                sum -= m[s[i]];
            } else {
                sum += m[s[i]];
            }
            prev = s[i];
        }
        return sum;
    }
};