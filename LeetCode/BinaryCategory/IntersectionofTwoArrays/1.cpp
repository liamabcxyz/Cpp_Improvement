class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> sa;
        set<int> sb;
        for(auto item:nums1)
        {
            sa.insert(item);
        }
        for(auto item:nums2)
        {
            sb.insert(item);
        }
        
        vector<int> vo;
        for(auto item:sa)
        {
            if(sb.find(item)!=sb.end())
            {
                vo.push_back(item);
            }
        }
        return vo;
    }
};
