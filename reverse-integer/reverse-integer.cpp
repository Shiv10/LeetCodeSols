class Solution {
public:
    int reverse(int x) {
        int min = INT_MIN;
        int max = INT_MAX;
        int d = 0;
        int res = 0;
        while(x) {
            d = x%10;
            x = x/10;
            
            if ((res > max/10) || (res==max/10 && d>=max%10)) return 0;
            
            if ((res<min/10) || (res==min/10 && d<=min%10)) return 0;
            
            res = res*10 + d;
        }
        
        return res;
    }
};