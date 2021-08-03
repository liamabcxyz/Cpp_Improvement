class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        string temp;
        if(s==t)
        {
            return false;
        }
        if(s.size()==t.size())
        {
            for(int i=0;i<t.size();i++)
            {
                temp=s;
                temp[i]=t[i];
                if(temp==t)
                {
                    return true;
                }
            }
            return false;
        }
        
        if(s.size()-1==t.size())
        {
            return insertCheck(t,s);
        }
        if(t.size()-1==s.size())
        {
            return insertCheck(s,t);
        }
        return false;
    }
    
    bool insertCheck(string s,string t)
    {
        string temp;
        for(int i=0;i<t.size();i++)
        {
            temp=s;
            temp.insert(i,1,t[i]);
            if(temp==t)
            {
                return true;
            }
        }
        return false;
    }
};
