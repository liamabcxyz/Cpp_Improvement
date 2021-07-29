class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        {
            return 1;
        }
        double sum=1;
        if(x==1)
        {
            return 1;
        }
        if(x==-1)
        {
            if(n%2==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        if(n>0)
        {
            for(int i=0;i<n;i++)
            {
                sum=sum*x;
            }
            return sum;
        }
        else
        {
            n=-n;
            for(int i=0;i<n;i++)
            {
                sum=sum*x;
            }
            return 1/sum;
        }
    }
};
