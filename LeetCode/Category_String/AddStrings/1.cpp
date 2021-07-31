class Solution {
public:
    string addStrings(string num1, string num2) {
        long n1 = 0;
        long n2 = 0;
        
        long count=1;
        for(int i = num1.size()-1;i>=0;i--)
        {
            n1=n1+(num1[i]-'0')*count;
            count=count*10;
        }
        
        count=1;
        for(int i = num2.size()-1;i>=0;i--)
        {
            n2=n2+(num2[i]-'0')*count;
            count=count*10;
        }
        
        long sum=n1+n2;
        
        return std::to_string(sum);
        
    }
};
