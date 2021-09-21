class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=0;
        int pre= -1001;
        for(int i=0;i<nums.size();i++)
        {
            if(pre!=nums[i])
            {
                nums[res]=nums[i];
                res++;
                pre=nums[i];
            }
        }
        
        return res;
    }
};
