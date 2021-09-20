class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]+add==10)
            {
                add=1;
                digits[i]=0;
            }
            else
            {   
                digits[i]++;
                add=0;
                break;
            }

        }
        
        if(add==1)
        {
            digits.insert(digits.begin(),1);
        }
        
        return digits;
    }
};
