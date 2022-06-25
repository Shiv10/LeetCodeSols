class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int c = 0;
        while(a!=0) {
            if(a&1) {
                c++;
            }
            a = a>>1;
        }
        
        return c;
    }
};