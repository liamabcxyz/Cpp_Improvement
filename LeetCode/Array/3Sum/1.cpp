class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        
        for(int i=0;i<nums.size();i++)
        {
            unordered_map<int,int> mp;
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i)
                {
                    if(mp[-nums[i]-nums[j]])
                    {
                        vector<int> a;
                        a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        a.push_back(-nums[i]-nums[j]);
                        sort(a.begin(),a.end());
                        res.insert(a);
                    }
                    else
                    {
                        mp[nums[j]]=j;
                    }
                }
            }
        }
        
        vector<vector<int>> ress;
        for(auto item:res)
        {
            ress.push_back(item);
        }
        return ress;
    }
};
