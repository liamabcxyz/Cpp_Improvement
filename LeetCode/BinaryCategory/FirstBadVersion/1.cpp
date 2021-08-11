// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        return bv(1,n,n);
    }
    
    int bv(int begin, int end, int res)
    {
        int mid=begin+(end-begin)/2;
        
        if(begin>end) return res;
        
        if(isBadVersion(mid))
        {
            return bv(begin,mid-1,mid);
        }
        else
        {
            return bv(mid+1,end,res);
        }
    }
};
