class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<vector<int>> result;
        vector<int> a;
        v.push_back(a);
        
        for(int i=0;i<n;i++)
        {
            int size=v.size();
            for(int j=0;j<size;j++)
            {
                if(v[j].size()<k)
                {
                    vector<int> temp;
                    temp=v[j];
                    temp.push_back(i+1);
                    v.push_back(temp);
                    if(temp.size()==k)
                    {
                        result.push_back(temp);
                    }                    
                }
            }
        }
        
        return result;
    }
};
