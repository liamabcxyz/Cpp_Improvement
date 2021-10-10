class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),1));
        int res=1;

        bool change=true;
        while(change)
        {
            change=false;

            for(int i=0;i<matrix.size();i++)
            {

                for(int j=0;j<matrix[0].size();j++)
                {
                    int pre=dp[i][j];
                    if(i-1>=0 && matrix[i-1][j]<matrix[i][j])
                        dp[i][j]=max(dp[i][j], dp[i-1][j]+1);
                    if(i+1<matrix.size() && matrix[i+1][j]<matrix[i][j])
                        dp[i][j]=max(dp[i][j], dp[i+1][j]+1);
                    if(j-1>=0 && matrix[i][j-1]<matrix[i][j])
                        dp[i][j]=max(dp[i][j], dp[i][j-1]+1);
                    if(j+1<matrix[0].size() && matrix[i][j+1]<matrix[i][j])
                        dp[i][j]=max(dp[i][j], dp[i][j+1]+1);   
                    
                    res=max(res,dp[i][j]);
                    if(dp[i][j]!=pre)
                    {
                        change=true;
                    }
                }
            }            
        }
        
        return res;

    }
};
