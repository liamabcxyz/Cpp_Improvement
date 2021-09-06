class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> a;
        v.push_back(a);
        
        for(int i=0;i<nums.size();i++)
        {
            int size=v.size();
            for(int j=0;j<size;j++)
            {
                vector<int> temp;
                temp=v[j];
                temp.push_back(nums[i]);
                v.push_back(temp);
            }
        }
        
        return v;
    }
};
