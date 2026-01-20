// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1;
        long long r=n;
        long long firstbad=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isBadVersion(mid)){
                firstbad=mid;
                r=mid-1;

            }
            else{
                l=mid+1;
            }
        }
        return int(firstbad);
    }
};