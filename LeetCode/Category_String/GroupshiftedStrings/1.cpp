class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> output;
        sort(strings.begin(),strings.end());
        
        for(std::vector<string>::iterator it = strings.begin(); it != strings.end(); ++it)
        {
            bool ex=true;
            for (std::vector<vector<string>>::iterator itt = output.begin() ; itt != output.end(); ++itt)
            {
                if(shifted(*it,(*itt)[0]))
                {
                    ex=false;
                    (*itt).push_back(*it);
                    break;
                }
            }
            if(ex)
            {
                vector<string> temp;
                temp.push_back(*it);
                output.push_back(temp);
            }
        }
        return output;
    }
    
    bool shifted(string &a, string &b)
    {
        if(a.length()!=b.length())
        {
            return false;
        }
        
        int diff=b[0]-a[0];
        for(int i=1;i<a.length();i++)
        {
            if (b[i]-a[i]==diff || b[i]+26-a[i]==diff)
            {
                continue;
            }
            
            else
            {
                return false;
            }
        }
        return true;
        
        
    }
};
