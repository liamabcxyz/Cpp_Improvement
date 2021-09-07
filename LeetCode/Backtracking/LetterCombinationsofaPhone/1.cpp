class Solution {
public:
    vector<string> ans;
    
    void helper(string &current, int idx, string digits)
    {
        if(current.length()==digits.length())
        {
            ans.push_back(current);
            return;
        }
        
            string characters;
            switch(digits[idx])
            {
                case '2':
                    characters="abc";
                    break;
                case '3':
                    characters="def";
                    break;
                case '4':
                    characters="ghi";
                    break;
                case '5':
                    characters="jkl";
                    break;                    
                case '6':
                    characters="mno";
                    break;                    
                case '7':
                    characters="pqrs";
                    break;                    
                case '8':
                    characters="tuv";
                    break;                    
                case '9':
                    characters="wxyz";
                    break;    
                default:
                    break;
            }
            
            for(auto ch : characters)
            {
                current.push_back(ch);
                cout<<current<<endl;
                helper(current,idx+1,digits);
                current.pop_back();
            }

    }
        
    vector<string> letterCombinations(string digits) 
    {
        if(digits.length()==0)
        {
            return ans;
        }
        
        string current="";
        helper(current, 0, digits);
        return ans;
    }
};
