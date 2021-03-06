class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int arr[m][n];
        
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1])
            return 0;
        
        for(int i=0;i<m;i++)
        {
            if(obstacleGrid[i][0]==1)
            {
                arr[i][0]=0;
                for(int j=i+1;j<m;j++)
                    arr[j][0]=0;
                break;                
            }
                
            else
                arr[i][0]=1;            
        }
        
        for(int i=0;i<n;i++)
        {
            if(obstacleGrid[0][i]==1)
            {
                arr[0][i]=0;
                for(int j=i;j<n;j++)
                    arr[0][j]=0;
                break;
            }
            else
                arr[0][i]=1;                  
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    arr[i][j]=0;
                }
                else if(obstacleGrid[i-1][j]==1 and obstacleGrid[i][j-1]==1)
                {
                    arr[i][j]=0;
                }               
                else if(obstacleGrid[i-1][j]==1)
                {
                    arr[i][j]=arr[i][j-1];
                }
                else if(obstacleGrid[i][j-1]==1)
                {
                    arr[i][j]=arr[i-1][j];
                }
                else
                {
                    arr[i][j]=arr[i-1][j]+arr[i][j-1];
                }
                cout<<"i,j: "<<i<<" "<<j<<endl;
                cout<<arr[i][j]<<endl;
            }
        }
        
        return arr[m-1][n-1];
    }
};
