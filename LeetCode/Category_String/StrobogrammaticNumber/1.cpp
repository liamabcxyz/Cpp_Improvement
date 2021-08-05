class Solution {
public:
    bool isStrobogrammatic(string num) {
        string rev;

        for(int i=0;i<num.length();i++)
        {
            string temp=bo(num[num.length()-i-1]);
            if(temp=="X")
            {
                return false;
            }
            rev+=temp;
        }
        
        if(rev==num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    string bo(char num)
    {
        if(num=='0')
        {
            return "0";
        }
        else if(num=='1')
        {
            return "1";
        }
        else if(num=='6')
        {
            return "9";
        }
        else if(num=='8')
        {
            return "8";
        }
        else if(num=='9')
        {
            return "6";
        }
        else
        {
            return "X";
        }
    }
};
