class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        vector<string> v;
        
        char last=currentState[0];
        for(int i=1;i<currentState.size();i++)
        {
            if(last=='+' && currentState[i]==last)
            {
                v.push_back(currentState);
                v.back()[i]='-';
                v.back()[i-1]='-';

            }
            last=currentState[i];
        }
        return v;
    }
};
