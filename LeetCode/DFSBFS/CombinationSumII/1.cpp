class Solution {
public:
    
    set<vector<int>> ans;
    
    void helper(vector<int>& candidates, int target, int idx, pair<vector<int>,int> current)
    {
        if(current.second==target)
        {
            ans.insert(current.first);
            return;
        }
        if(current.second>target)
        {
            return;
        }
        if(current.first.size()>=candidates.size())
        {
            return ;
        }
        
        for(int i=idx;i<candidates.size();i++)
        {
            // for(auto ch: current.first)
            // {
            //     cout<<ch<<" ";
            // }
            // cout<<endl;
            
            current.first.push_back(candidates[i]);
            current.second=current.second+candidates[i];
            helper(candidates,target,i+1,current);
            current.second=current.second-candidates[i];
            current.first.pop_back();
            
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());

        pair<vector<int>,int> current;
        current.second=0;
        
        helper(candidates, target, 0, current);
        
        vector<vector<int>> anss;
        for(auto ch:ans)
        {
            anss.push_back(ch);
        }
        return anss;
    }
};
