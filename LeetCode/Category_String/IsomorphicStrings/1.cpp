class Solution {
public:
    bool isIsomorphic(string s, string t) {
        while(s.size()!=0)
        {
            vector<int> vectorofIndex;
            for(int i=0;i<s.length();i++)
            {
                if (s[i]==s[0])
                {
                    if(t[i]!=t[0])
                    {
                        return false;
                    }
                    vectorofIndex.push_back(i);
                }
                else
                {
                    if(t[i]==t[0])
                    {
                        return false;
                    }
                }
            }
            
            reverse(vectorofIndex.begin(),vectorofIndex.end());
            
             for ( std::vector<int>::iterator it=vectorofIndex.begin(); it!=vectorofIndex.end(); it++)
             {
                s.erase(s.begin()+*it);
                t.erase(t.begin()+*it);
             }

        }
        return true;
    }
};
