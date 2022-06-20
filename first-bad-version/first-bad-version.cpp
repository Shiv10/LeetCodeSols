// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0, high = n;
        int mid;
        int badVersion = -1;
        while(low<=high) {
            mid = low + (high - low)/2;
            bool check = isBadVersion(mid);
            if (check) {
                badVersion = mid;
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        
        return badVersion;
    }
};