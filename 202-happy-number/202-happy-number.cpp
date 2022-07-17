class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(s.count(n)==0) {
            if (n==1) {
                return true;
            }
            s.insert(n);
            int sum = 0;
            while(n>0) {
                int d = n%10;
                sum += (d*d);
                n = n/10;
            }
            
            n = sum;
        }
        
        return false;
    }
};