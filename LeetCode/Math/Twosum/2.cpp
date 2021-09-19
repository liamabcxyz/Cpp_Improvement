class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mpc;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp[target-nums[i]]==1)
            {
                res.push_back(i);
                res.push_back(mpc[target-nums[i]]);
                return res;
            }
            else
            {
                mp[nums[i]]=1;
                mpc[nums[i]]=i;
            }
        }
        
        return res;
    }
};
