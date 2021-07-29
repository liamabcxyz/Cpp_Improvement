class Solution {
public:
        double mmyPow(double x, int n)
    {
        int rest=n%2;
        if (n==0)
        {
            return 1;
        }
        if (n==1)
        {
            return x;
        }
        
        if (rest==0)
        {
            return mmyPow(x,n/2)*mmyPow(x,n/2);
        }
        else
        {
            return mmyPow(x,(n-1)/2)*mmyPow(x,(n-1)/2)*x;
        }
    }
    
    double myPow(double x, int n) {
        if(n<0)
        {
            x=1/x;
            n=-n;
            
        }
        return mmyPow(x,n);
}

};
