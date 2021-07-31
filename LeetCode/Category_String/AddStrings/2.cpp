class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string str="";
        int l1=num1.length()-1;
        int l2=num2.length()-1;
        int carry=0;
        while(l1>=0||l2>=0)
        {

            int sum=((l1<0)?0:num1[l1]-'0')+((l2<0)?0:num2[l2]-'0')+carry;
            l1--;
            l2--;
            carry= sum/10;
            str.push_back(sum%10+'0');
        }
        
        if(carry==1)
        {
            str.push_back(carry+'0');
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
