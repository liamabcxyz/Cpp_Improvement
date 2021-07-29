class Solution {
public:
    double myPow(double x, int n) 
    {
        int abs_n=abs(n);
        double ans=1;
        
        while(abs_n>0)
        {
            if (abs_n%2==1)
            {
                ans=ans*x;
            }
            x= x*x;
            abs_n = abs_n /2;
        }
        
        if (n<0)
        {
            return 1/ans;
        }
        return ans;
    }

};
