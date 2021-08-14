class Solution {
public:
    int findMin(vector<int>& nums) {
        
        for(auto ch:nums)
        {
            std::cout<<ch<<std::endl;
        }
        int left=0;
        int right=nums.size()-1;
        
        if(nums[left]<=nums[right])
        {
            return nums[0];
        }
        
        int pivot=left+(right-left)/2;
        
        while(left<=right)
        {
            pivot=left+(right-left)/2;
            std::cout<<left<<" "<<right<<" "<<pivot<<std::endl;
            if(nums[pivot]>nums[pivot+1])
            {
                return nums[pivot+1];
            }            
            else
            {
                
                if(nums[pivot]<nums[left])
                {
                    right=pivot-1;
                }
                else
                {
                    left=pivot+1;
                }
                
            }
        }
        return nums[pivot];
    }
};
