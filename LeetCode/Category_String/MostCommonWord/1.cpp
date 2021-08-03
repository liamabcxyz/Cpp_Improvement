class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
       for(int i=0;i<paragraph.length();i++) { 
          if(paragraph[i]>=65 && paragraph[i]<=92)
          {
            paragraph[i]=paragraph[i]+32;
          }        
       }

        unordered_map<string,int> mp;
        string temp="";
        for(int i=0;i<paragraph.length();i++)
        {
            std::cout<<temp<<std::endl;
            if(temp=="" && (paragraph[i]==' '||paragraph[i]=='!'||paragraph[i]=='?'||paragraph[i]=='\''||paragraph[i]==','||paragraph[i]==';'||paragraph[i]=='.'))
            {
                continue;
            }
            else if(temp!="" && (paragraph[i]==' '||paragraph[i]=='!'||paragraph[i]=='?'||paragraph[i]=='\''||paragraph[i]==','||paragraph[i]==';'||paragraph[i]=='.'))
            {
                if(mp[temp])
                {
                    mp[temp]++;
                }
                else
                {
                    mp[temp]=1;
                }
                temp="";
            }
            else
            {
                temp+=paragraph[i];
            }
        }
        if(temp!="")
        {
            if(mp[temp])
                {
                    mp[temp]++;
                }
                else
                {
                    mp[temp]=1;
                }
        }
        
        string maxstring="";
        int maxint=-1;
        for (const auto & [ key, value ] : mp) 
        {
            if(std::find(banned.begin(), banned.end(), key) != banned.end())
            {
                continue;
            }
            else
            {
                if(value>maxint)
                {
                    maxint=value;
                    maxstring=key;
                }
            }

        }
        return maxstring;
        
    }
    
};
