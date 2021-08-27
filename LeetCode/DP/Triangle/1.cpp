class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> vv=triangle;
        
        for(int i=triangle.size()-2;i>=0;i--)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                int minn=min(vv[i+1][j],vv[i+1][j+1]);
                vv[i][j]=minn+triangle[i][j];
                
                cout<<vv[i][j]<<endl;
            }
        }
        
        return vv[0][0];
    }
};
