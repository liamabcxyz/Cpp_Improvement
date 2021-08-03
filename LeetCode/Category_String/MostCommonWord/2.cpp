class Solution {
public:
    string mostCommonWord(string para, vector<string>& banned) {
        unordered_set<string>set(begin(banned), end(banned));
        for (int i = 0; i < para.length(); i++)
            para[i] = isalpha(para[i]) ? tolower(para[i]) : ' ';
        stringstream ss(para);
        string str;
        unordered_map<string, int>u;
        while (ss >> str)
            if(!set.count(str))
                u[str]++;
        int freq = INT_MIN;
        for (auto c : u)
            if (c.second > freq)
                freq = c.second, str = c.first;
        return str;
    }
    
};
