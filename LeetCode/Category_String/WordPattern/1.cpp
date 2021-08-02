class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,int> already;
        
        int count=0;
        for(auto c:s)
        {
            if(c==' ')
            {
                count++;
            }
        }
        if(count+1!=pattern.size())
            return false;
        
        for(char ch:pattern)
        {
            string temp="";
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=' ')
                {
                    temp+=s[i];
                }
                else
                {
                    s.erase(0,i+1);
                    break;
                }       
            }
            if(mp[ch]=="")
            {
                if(already[temp]==1)
                {
                    return false;
                }
                
                mp[ch]=temp;
                already[temp]=1;
            }
            else
            {

                if(mp[ch]!=temp)
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};
