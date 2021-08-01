class Solution {
public:
    string frequencySort(string s) {
        std::map<char,int> map;
        
        for(int i=0;i<s.size();i++)
        {
            if(map[s[i]])
            {
                map[s[i]]+=1;
            }
            else
            {
                map[s[i]]=1;
            }
        }
        
        std::map<int,string> fmap;
        for(auto i=map.begin();i!=map.end();i++)
        {   
            if(fmap[i->second]!="")
            {
                fmap[i->second]+=i->first;
            }
            else
            {
                fmap[i->second]=i->first;
            }
            
        }
        
        string result="";
        for(auto i=fmap.begin();i!=fmap.end();i++)
        {
            for(int z=0;z<i->second.size();z++)
            {
                for(int j=0;j<i->first;j++)
                {
                    result+=(i->second[z]);
                }
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
