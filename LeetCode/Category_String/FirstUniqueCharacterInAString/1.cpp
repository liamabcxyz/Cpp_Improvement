class Solution {
public:
    int firstUniqChar(string s) {
        int index = -1;
        for(int i =0;i<s.size();i++)
        {   
            bool judge=true;
            for (int j = 0;j<s.size();j++)
            {
                if (i!=j)
                {
                    if(s[i]==s[j])
                    {
                        judge=false;
                        break;
                    }
                }

            }
            if(judge)
            {
                index=i;
                break;
            }
        }
        return index;
    }
};
