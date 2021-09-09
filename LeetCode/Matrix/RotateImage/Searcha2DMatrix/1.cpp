class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if(target<matrix[0][0])
            return false;
        int row=matrix.size();
        int column=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            if(matrix[i][column-1]<target)
                continue;
            int l=0;
            int r=column-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(matrix[i][mid]==target)
                    return true;
                if(matrix[i][mid]>target)
                    r=mid-1;
                else
                    l=mid+1;
            }
        }
        return false;
    }
};
