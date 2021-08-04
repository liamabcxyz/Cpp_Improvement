class Solution {
public:
    int titleToNumber(string col) {
        int count=0;
        
        for(int i=0;i<col.length();i++)
        {
            count+=(col[col.length()-i-1]-'A'+1)*pow(26,i);
        }
        return  count;
    }
};
