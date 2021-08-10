class Solution {
public:
    int shortestWay(string source, string target) {
        int idx1=0;
        int idx2=0;
        
        for(auto ch:target)
        {
            if(source.find(ch)==std::string::npos)
            {
                return -1;
            }
        }
        
        
        int num=0;
        while(idx2<target.length())
        {
            if(idx1==source.length())
            {
                idx1=0;
                num++;
            }
            
            if(source[idx1]==target[idx2])
            {
                idx1++;
                idx2++;
            }
            else
            {
                idx1++;
            }
        }
        
        
        return ++num;
    }
};
