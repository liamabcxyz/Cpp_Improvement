class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> ss;
        for(auto ch:jewels)
        {
            ss.insert(ch);
        }
        
        int count=0;
        for(auto ch:stones)
        {
            if(ss.find(ch) != ss.end())
            {
                count++;
            }
        }
        return count;
    }
};
