class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(judgeEating(piles,h,1))
        {
            return 1;
        }
        
        int low=1;
        int high=*max_element(begin(piles),end(piles));
        int mid=low+(low+high)/2;
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            cout<<"low: "<<low<<" high: "<<high<<" mid: "<<mid<<endl;
            if(judgeEating(piles,h,mid))
            {
                high=mid-1;
                cout<<"True"<<endl;
            }
            else
            {
                low=mid+1;
                cout<<"False"<<endl;
            }    
        }
        
        
        if(judgeEating(piles,h,high))
        {
            return high;
        }
        else if(judgeEating(piles,h,mid))
        {
            return mid;
        }
        else
        {
            return low;
        }
    }
    
    bool judgeEating(vector<int>& piles, int h, int k)
    {
        double count=0;
        for(auto bana : piles)
        {
            if(bana%k!=0)
            {
                count=count+(bana/k)+1;
            }
            else
            {
                count=count+(bana/k);
            }
        }
        if(count>h)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
