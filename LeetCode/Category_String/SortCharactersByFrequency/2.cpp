class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        
        for(auto ch:s)
        {
            mp[ch]++;
        }
        
        priority_queue<pair<int,char>> pq;
        for(auto [key,value]:mp)
        {
            pq.push({value,key});
        }
        
        string result="";
        while(pq.size())
        {
            auto [size, ch]=pq.top();
            pq.pop();
            
            while(size--)
            {
                result+=ch;
            }
        }
        return result;
    }
};
