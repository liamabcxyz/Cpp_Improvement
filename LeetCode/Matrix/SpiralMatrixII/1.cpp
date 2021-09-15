class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res( n , vector<int> (n,0));
        
        int times=1 + (n-0.1)/2;
        int count=1;
        for(int i=0;i<times;i++)
        {
            for(int j=i;j<n-i;j++)
            {
                res[i][j]=count++;
            }
            for(int j=i+1;j<n-i;j++)
            {
                res[j][n-i-1]=count++;
            }
            for(int j=n-i-2;j>=i;j--)
            {
                res[n-i-1][j]=count++;
            }
            for(int j=n-i-2;j>i;j--)
            {
                res[j][i]=count++;
            }
        }
        
        return res;
    }
};
