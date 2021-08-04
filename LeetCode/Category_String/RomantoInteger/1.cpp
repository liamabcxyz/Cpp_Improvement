class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string,int> mp;
        mp["I"]=1;
        mp["V"]=5;
        mp["X"]=10;
        mp["L"]=50;
        mp["C"]=100;
        mp["D"]=500;
        mp["M"]=1000;
        mp["IV"]=4;
        mp["IX"]=9;
        mp["XL"]=40;
        mp["XC"]=90;
        mp["CD"]=400;
        mp["CM"]=900;
        
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            string two="";
            two+=s[i];
            two+=s[i+1];
            if(mp[two])
            {
                count+=mp[two];
                i++;
            }
            else
            {
                two="";
                two+=s[i];
                count+=mp[two];
            }
        }
        
        return count;
    }
};
