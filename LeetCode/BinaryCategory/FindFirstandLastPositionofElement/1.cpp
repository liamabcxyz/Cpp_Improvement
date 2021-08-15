class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        
        int mid;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(nums[mid]<target)
            {
                left=mid+1;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else
            {
                int first=mid;
                int second=mid;
                for(int i=mid;i>=0;i--)
                {
                    if(nums[i]==target)   
                    {
                        first=i;
                    }
                    else
                    {
                        break;
                    }
                }
                for(int i=mid;i<nums.size();i++)
                {
                    if(nums[i]==target)
                    {
                        second=i;
                    }
                    else
                    {
                        break;
                    }
                }
                
                vector<int> v{first,second};
                return v;
            }
        }
        
        vector<int> v{-1,-1};
        return v;
    }
};
