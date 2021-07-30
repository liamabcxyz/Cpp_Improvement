class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        string temp=*strs.begin();
        
            for (int i =0;i<temp.size();i++)
            {
                bool judge = true;
                for (std::vector<string>::iterator it = strs.begin() + 1; it != strs.end(); ++it)
                {
                    if((*it)[i]!=temp[i])
                    {
                        judge = false;
                        break;
                    }
                }
                if(judge==false)
                {
                    return prefix;
                    break;
                }
                else
                {
                    prefix=prefix+temp[i];
                }
            }
        return prefix;
    }
};
