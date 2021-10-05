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
        
        for(int i=0;i<s.size()-p.size()+1;i++)
        {
            
            for(int j=i;j<p.size()+i;j++)
            {
                sn[s[j]]++;       
            }

            if(ss==sn)
            {
                res.push_back(i);
            }
            sn.clear();
        }
        
        return res;
    }
};
