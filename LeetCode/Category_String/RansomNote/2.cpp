class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ra[26]={0},rm[26]={0};
        for(int i=0;i<ransomNote.size();i++) ra[ransomNote[i]-'a']++;
        for(int i=0;i<magazine.size();i++) rm[magazine[i]-'a']++;
        for(int i=0;i<26;i++)
            if(ra[i]>rm[i]) 
                return false;
        return true;
    }
};
