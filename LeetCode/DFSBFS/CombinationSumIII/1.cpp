class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int> current, int k, int n, int idx, int count)
    {
        if(n==0 && count==k)
        {
            ans.push_back(current);
            return;
        }
        
        for(int i=idx;i<10;i++)
        {
            current.push_back(i);
            helper(current, k, n-i, i+1,count+1);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> current;
        helper(current,k,n,1,0);
        return ans;
    }
};
