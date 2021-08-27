class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 && n==1)
            return 1;
        return path_num(m,n,0,0);
    }
    
    int path_num(int m, int n, int x, int y)
    {
        if(x==m-1 && y==n-1)
            return 0;
        if(x==m-1 && y==n-2)
            return 1;
        if(x==m-2 && y==n-1)
            return 1;
        
        if(x==m-1)
            return path_num(m,n,x,y+1);
        if(y==n-1)
            return path_num(m,n,x+1,y);
        
        return path_num(m,n,x,y+1)+path_num(m,n,x+1,y);
    }
};
