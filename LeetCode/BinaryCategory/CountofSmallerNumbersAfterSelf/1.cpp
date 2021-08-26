class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> sortedV;
        vector<int> indexV;
        for(int i=nums.size()-1;i>=0;i--)
        {
            indexV.push_back(insertBinary(sortedV,nums[i]));
        }
        reverse(indexV.begin(),indexV.end());
        return indexV;
    }
    
    int insertBinary(vector<int>& vv, int num)
    {
        if(vv.size()==0)
        {
            vv.push_back(num);
            return 0;
        }

        int low=0,high=vv.size()-1;
        int mid;     
        while(low<=high)
        {   
            mid=low+(high-low)/2;

            if(vv[mid]<=num)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        mid=low+(high-low)/2;
        vv.insert(vv.begin()+mid,num);
        
        
        while(mid>0)
        {
            if(vv[mid]==vv[mid-1])
            {
                mid--;
            }
            else
            {
                break;
            }
        }
        return mid;
    }
};
