class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1);
        dp[0]=0;
        cout<<"---"<<endl;
        for(int i=1;i<=n;i++)
        {
            int count=sqrt(i);
            dp[i]=dp[i-1]+1;
            for(int j=1;j<=count;j++)
            {
                dp[i]=min(dp[i],dp[i-j*j]+1);
            }
        }
        
        return dp[n];
    }
    
};
