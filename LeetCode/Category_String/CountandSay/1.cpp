class Solution {
public:
    string countAndSay(int n) {
        string begin="1";
        for(int i=1;i<n;i++)
        {   
            begin=nextt(begin); 
        }
        return begin;
    }
    
    string nextt(string s)
    {
        if(s=="1")
        {
            return "11";
        }
        
        char last=s[0];
        int lastnum=1;
        string result="";
        for(int i=1;i<s.length();i++)
        {   
            if(s[i]==last)
            {
                lastnum++;
            }
            else
            {
                result+=to_string(lastnum);
                result+=last;
                
                last=s[i];
                lastnum=1;
            }
        }
        result+=to_string(lastnum);
        result+=last;
        
        
        return result;
    }
};
