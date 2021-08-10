class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        
        for(auto ch:s) mp[ch]++;
        
        char key;
        for (auto const& x : mp)
        {
            if(x.second==1)
            {
                key=x.first;
            }
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==key) return i;
        }
        return -1;
    }
};
