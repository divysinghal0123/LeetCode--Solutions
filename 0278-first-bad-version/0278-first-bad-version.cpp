// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int upper = n;
        int mid;
        while(low < upper){
             mid = low + (upper-low)/2;
            if(!isBadVersion(mid)){
                low = mid+1;
            }else{
                upper = mid;
            }
        }
        return low;
    }
};