class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[strs.size()-1];
        
        string prefix="";
        for(int i =0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                prefix= prefix+a[i];
            }
            else
            {
                break;
            }
            
        }
        return prefix;
    }
};
