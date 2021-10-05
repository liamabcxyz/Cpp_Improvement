class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        
        if(p.size()>s.size())
            return res;
        
        map<char,int> ss;
        for(auto ch:p)
        {
            ss[ch]++;
        }
        
        map<char,int> sn;

        for(int j=0;j<p.size();j++)
        {
            sn[s[j]]++;       
        }

        if(ss==sn)
        {
            res.push_back(0);
        }
        
        for(int i=1;i<s.size()-p.size()+1;i++)
        {
           
            if(sn[s[i-1]]==1)
                sn.erase(s[i-1]);
            else
                sn[s[i-1]]=sn[s[i-1]]-1;
            
            sn[s[i+p.size()-1]]++;
            
            if(ss==sn)
            {
                res.push_back(i);
            }
        }
        
        return res;
    }
};
