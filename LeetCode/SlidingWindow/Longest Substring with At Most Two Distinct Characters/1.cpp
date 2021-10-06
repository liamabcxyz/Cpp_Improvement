class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int end=0;
        
        int left=0,right=0;
        
        int first=0;
        int second=0;
        for(int i=1;i<s.size();i++)
        {
            if(second==0 && s[first]!=s[i])
            {
                second=i;
            }
            
            if(s[i]==s[first] || s[i]==s[second])
            {               
            }
            else
            {
                end=i-1;
                break;
            }
        }
        
        left=first,right=end;
        
        for(int i=end;i<s.size();i++)
        {
            if(s[i]!=s[first] && s[i]!=s[second])
            {
                if(i-1-first>right-left)
                {
                    left=first;
                    right=i-1;                    
                }
                
                for(int j=i-1;j>=0;j--)
                {
                    if(s[j]!=s[i-1])
                    {
                        first=j+1;
                        break;
                    }
                        
                }
                second=i;
                
            }
        }

        if(s.size()-1-first>right-left)
        {
            left=first;
            right=s.size()-1;                    
        }
        
        return right-left+1;
    }
};
