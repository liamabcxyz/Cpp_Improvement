class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin=0;
        int end=nums.size()-1;
        
        while(begin<=end)
        {
            int mid=begin+(end-begin)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>=nums[begin])
            {
                if(target>=nums[begin] && target<nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    begin=mid+1;
                }
            }
            else
            {
                if(target<=nums[end] && target > nums[mid])
                {
                    begin=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
