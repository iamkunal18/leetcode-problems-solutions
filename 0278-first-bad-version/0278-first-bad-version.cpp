// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int ans;

        while(start < end) {
            if(end - start == 1) {
                ans = end;
                break;
            } 
            int mid = start + (end - start)/2;
            if(isBadVersion(mid)) end = mid;
            else start = mid;
        }
        
        if(isBadVersion(1)) ans= 1;
        
        return ans;
    }
};