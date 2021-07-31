class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<ransomNote.length();i++)
        {   
            bool judge=true;
            for (int j=0;j<magazine.length();j++)
            {
                if (ransomNote[i]==magazine[j])
                {
                    judge=false;
                    magazine.erase(magazine.begin()+j);
                    break;
                }
            }
            if (judge)
            {
                return false;
            }
        }
        return true;
    }
};
