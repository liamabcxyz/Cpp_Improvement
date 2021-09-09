class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowx=0;
        int lowy=0;
        int highx=matrix.size()-1;
        int highy=matrix[0].size()-1;
        int midx;
        int midy;
        
        while(lowx<highx && lowy<highy)
        {
            midx=lowx+(highx-lowx)/2;
            midy=lowy+(highy-lowy)/2;
            
            if(matrix[midx][midy]==target)
            {
                return true;
            }
            
            if(matrix[midx][midy]>target)
            {
                highx=midx-1;
                highy=midy-1;
            }
            else
            {
                lowx=midx+1;
                lowy=midy+1;
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=lowy;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
        }
        
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=lowx;j<matrix.size();j++)
            {
                if(matrix[j][i]==target)
                {
                    return true;
                }
            }
        }      
        
        return false;
    }
};
