class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size()-1;
        int temp=0;
        bool start=false;
        for (int i = length; i>=0;i--)
        {   
            if(s[i]!=' ')
            {
                start = true;
            }
            if (start)
            {
                if (s[i]!=' ')
                {
                    temp++;
                }
                else
                {
                    break;
                }
            }
        }
        return temp;
    }
};
