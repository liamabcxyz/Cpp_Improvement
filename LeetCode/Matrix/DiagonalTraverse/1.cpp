class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int times = mat.size() * 2 - 1;
        vector<int> res;
        for(int i=0;i<mat.size();i++)
        {
            int count=i+1;
            if(i%2==0)
            {
                int x= i;
                int y=0;
                for(int j=0;j<count;j++)
                {
                    res.push_back(mat[x][y]);
                    x=x-1;
                    y=y+1;
                }
            }
            else
            {
                int x=0;
                int y=i;
                for(int j=0;j<count;j++)
                {
                    res.push_back(mat[x][y]);
                    x=x+1;
                    y=y-1;
                }                
            }
        }
        
        for(int i=1;i<mat.size();i++)
        {
            int count=mat.size()-i;
            if(i%2==0)
            {
                int x= mat.size()-1;
                int y= i;
                for(int j=0;j<count;j++)
                {
                    res.push_back(mat[x][y]);
                    x=x-1;
                    y=y+1;
                }
            }
            else
            {
                int x=i;
                int y=mat.size()-1;
                for(int j=0;j<count;j++)
                {
                    res.push_back(mat[x][y]);
                    x=x+1;
                    y=y-1;
                }                
            }
        }        
        
        return res;
    }
};
